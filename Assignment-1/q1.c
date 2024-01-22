#include <stdio.h>

int main() {
    int n;

    printf("\nEnter a number to compute sum upto: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n + 1; ++i) {
        sum += i;
    }

    printf("Sum is: %d\n", sum);
}