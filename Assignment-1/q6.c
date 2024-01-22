#include <stdio.h>

int main() {
    int x, n;

    printf("\nEnter x and n for x - x^2 + x^3 ... x^n: ");
    scanf("%d %d", &x, &n);

    int term = x, sum = 0;

    for (int i = 0; i < (n-1)/2 + 1; ++i) {
        sum += term;
        term = -x*x;
    }

    printf("Sum is: %d\n", sum);
}