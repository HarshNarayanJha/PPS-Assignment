#include <stdio.h>

int main() {
    int n;

    printf("\nEnter a number to compute factorial: ");
    scanf("%d", &n);

    int f = 1;
    int i = 1;

    while (i <= n) {
        f *= i;
        ++i;
    }
    

    printf("Factorial is: %d\n", f);
}