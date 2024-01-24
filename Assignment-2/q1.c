#include <stdio.h>
#include <math.h>

int main() {
    float p, r;
    int n;

    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %d", &p, &r, &n);

    float si = (p*r*n) / 100.0;
    float ci = p * pow(1+r, n) - p;

    printf("Simple Interest is: %.2f\n", si);
    printf("Compound Interest is: %.2f\n", ci);

    return 0;
}