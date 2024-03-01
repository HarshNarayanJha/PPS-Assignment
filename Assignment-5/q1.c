#include <stdio.h>

// Write a C program to evaluate the series 
// S=1+1/2+1/3+...+1/N

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    float s = 0;
    for (int i = 1; i < n + 1; ++i) {
        s += 1.0 / i;
    }

    printf("Sum = %.2f\n", s);

    return 0;
}