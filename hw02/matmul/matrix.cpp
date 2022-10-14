#include "utils.hpp"

void zero_matrix(double arr[], int n) {
    for (int i = 0; i < n * n; i++) {
        arr[i] = 0.0;
    }
}

void random_matrix(double arr[], int n) {
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i < n * n; i++) {
        arr[i] = (double) rand()/RAND_MAX;
    }
}

void print(double arr[], int n) {
    for (int i = 0; i < n * n; i++) {
        std::cout << arr[i] << std::endl;
    }
}
