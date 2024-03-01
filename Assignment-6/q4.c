#include <stdio.h>

// Write a C program to determine whether a given matrix is symmetric or not.

int main() {
    int A[100][100];

    int m;
    int n;
    m = 0;
    n = 0;

    printf("Enter Matrix Order (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter Matrix A: \n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("(%d, %d)> ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    int is_symmetric = 1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] != A[j][i]) {
                is_symmetric = 0;
            }
        }
    }

    if (is_symmetric == 1){
        printf("Matrix is Symmetric\n");
    } else {
        printf("Matrix is non-Symmetric\n");
    }

    return 0;
}