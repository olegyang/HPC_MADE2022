#ifndef utils_hpp
#define utils_hpp

#include <iostream>
#include <stdlib.h>
#include <sys/time.h>

void zero_matrix(double arr[], int n);

void random_matrix(double arr[], int n);

void print(double arr[], int n);

double matmul_ijk(double a[], double b[], double c[], int n);

double matmul_jik(double a[], double b[], double c[], int n);

double matmul_kij(double a[], double b[], double c[], int n);

#endif
