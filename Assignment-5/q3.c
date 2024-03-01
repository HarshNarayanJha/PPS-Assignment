#include <stdio.h>

// Write a C program to check whether a number is perfect number or not.

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d is perfectly perfect\n", n);
    } else {
        printf("%d is not so perfect\n", n);
    }

    return 0;
}