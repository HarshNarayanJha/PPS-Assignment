#include <stdio.h>

// sum of series S = 1 + (1+2) + (1+2+3) + ... + (1+2+3+..+N)

int main() {
    int n;
    printf("Enter the number to calculate sum of series upto: ");
    scanf("%d", &n);

    int s = 0;

    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < i+1; ++j) {
            s +=j;
        }
    }

    printf("Sum of the series is: %d\n", s);
}