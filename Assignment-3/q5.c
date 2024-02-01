#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

int main() {
    int n;
    printf("Enter a number to check prime: ");
    scanf("%d", &n);

    bool is_prime = true;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime == true) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }
}