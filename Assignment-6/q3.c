#include <stdio.h>

// Write a C program to add two matrices of order m×n

int main() {
    int A[100][100];
    int B[100][100];

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

    printf("\nEnter Matrix B: \n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("(%d, %d)> ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    int S[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSum is:\n");

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}