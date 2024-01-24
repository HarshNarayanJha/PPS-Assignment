#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter Four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float sum = a + b + c +d;
    float avg = sum / 4.0;

    printf("Sum is: %.2f\n", sum);
    printf("Average value is: %.2f\n", avg);

    return 0;
}