#include "utils.hpp"

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    double *a = new double[n * n];
    double *b = new double[n * n];
    double *c = new double[n * n];
    random_matrix(a, n);
    random_matrix(b, n);
    zero_matrix(c, n);
    std::cout << "Size: " << n << std::endl;
    std::cout << "Time i,j,k: " << matmul_ijk(a, b, c, n) << std::endl;
    std::cout << "Time j,i,k: " << matmul_jik(a, b, c, n) << std::endl;
    std::cout << "Time k,i,j: " << matmul_kij(a, b, c, n) << std::endl;
    
    return 0;
}