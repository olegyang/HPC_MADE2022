#include <omp.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv)
{
    omp_set_num_threads(2);
    int tid;
    
#pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        std::cout << "cout " << tid << " hello world" << std::endl;
    }

#pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        printf("printf %d hello world\n", tid);
    }

#pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        
#pragma omp critical
        {
            std::cout << "cout " << tid << " hello world" << std::endl;
        }
    }

    return 0;
}