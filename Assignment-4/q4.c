#include <stdio.h>

// Sum of digits of a number

int main() {
    int n;
    printf("Calculate the sum of digits of: ");
    scanf("%d", &n);

    int s = 0;

    int a = n;
    while (a > 0) {
        s += a % 10;
        a = a / 10;
    }

    printf("Sum is: %d\n", s);

    return 0;
}