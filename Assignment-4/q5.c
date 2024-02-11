#include <stdio.h>
#include <math.h>

// Reverse of a number

int main() {
    int n;
    printf("Reverse this number: ");
    scanf("%d", &n);

    int num_d = 0;
    int rev = 0;

    int a = n;
    while (a > 0) {
        a = a / 10;
        num_d++;
    }

    a = n;
    while (a > 0) {
        int d = a % 10;
        rev += d * pow(10, --num_d);
        a = a / 10;
    }

    printf("Reverse is: %d\n", rev);

    return 0;
}