#include <stdio.h>

// Fibonacci series

int main() {
    int n;
    printf("How many terms of fibonacci series: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c = a + b;

    printf("%d %d ", a, b);

    for (int i = 0; i < n-2; ++i) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n");

    return 0;
}