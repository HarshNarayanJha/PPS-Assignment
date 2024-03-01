#include <stdio.h>

// Write a C program to find and print the transpose of a given matrix.

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

    int T[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            T[j][i] = A[i][j];
        }
    }

    printf("\nTranspose is is:\n");

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}