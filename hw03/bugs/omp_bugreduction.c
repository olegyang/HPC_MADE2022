#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

void dotprod(float * a, float * b, float * sum, size_t N)
{
    int i, tid;
    float local_sum = 0.0;
    
    #pragma omp parallel for \
    shared (N, a, b) \
    private (i, tid) \
    reduction(+:local_sum)
        for (i = 0; i < N; ++i)
        {
            tid = omp_get_thread_num();
            local_sum += a[i] * b[i];
            printf("tid = %d i = %d\n", tid, i);
        }

    *sum = local_sum;
}

int main (int argc, char *argv[])
{
    const size_t N = 100;
    int i;
    float sum;
    float a[N], b[N];


    for (i = 0; i < N; ++i)
    {
        a[i] = b[i] = (double)i;
    }

    sum = 0.0;
    dotprod(a, b, &sum, N);
    
    printf("Sum = %f\n",sum);

    return 0;
}