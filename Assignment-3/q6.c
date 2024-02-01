#include <stdio.h>
#include <math.h>

int main() {

    int n, d;

    printf("Enter a number to check Armstrong: ");
    scanf("%d", &n);
    printf("Enter number of digits of that number: ");
    scanf("%d", &d);

    int sum = 0;

    for (int i = 1; i < d + 1; ++i) {
        int digit;
        digit = (int) ((N % (int) pow(10, i)) - (n % (int) pow(10, i-1))) / (int) pow(10, i-1);

        sum += pow(digit, d);
    }

    if (sum == n) {
        printf("%d is an Armstrong Number\n", n);
    } else {
        printf("%d is not an Armstrong Number\n", n);
    }

    return 0;

}