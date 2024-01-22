#include <stdio.h>

int main() {
    int n;

    printf("\nEnter a number to compute factorial: ");
    scanf("%d", &n);

    int f = 1;

    for (int i = 1; i < n + 1; ++i) {
        f *= i;
    }

    printf("Factorial is: %d\n", f);
}