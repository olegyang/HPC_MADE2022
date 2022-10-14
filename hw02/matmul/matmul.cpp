#include "utils.hpp"

double matmul_ijk(double a[], double b[], double c[], int n) {
    struct timeval start, end;
    double r_time = 0.0;
    gettimeofday(&start, NULL);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i * n + j] = c[i * n + j] + a[i * n + k] * b[k * n + j];
            }
        }
    }
    gettimeofday(&end, NULL);
    r_time = end.tv_sec - start.tv_sec + ((double) (end.tv_usec - start.tv_usec)) / 1000000;
    return r_time;
}

double matmul_jik(double a[], double b[], double c[], int n) {
    struct timeval start, end;
    double r_time = 0.0;
    gettimeofday(&start, NULL);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                c[i * n + j] = c[i * n + j] + a[i * n + k] * b[k * n + j];
            }
        }
    }
    gettimeofday(&end, NULL);
    r_time = end.tv_sec - start.tv_sec + ((double) (end.tv_usec - start.tv_usec)) / 1000000;
    return r_time;
}

double matmul_kij(double a[], double b[], double c[], int n) {
    struct timeval start, end;
    double r_time = 0.0;
    gettimeofday(&start, NULL);
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                c[i * n + j] = c[i * n + j] + a[i * n + k] * b[k * n + j];
            }
        }
    }
    gettimeofday(&end, NULL);
    r_time = end.tv_sec - start.tv_sec + ((double) (end.tv_usec - start.tv_usec)) / 1000000;
    return r_time;
}