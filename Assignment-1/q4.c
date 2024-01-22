#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("\nEnter numbers a b c for ax^2 + bx + c = 0: ");

    scanf("%f %f %f", &a, &b, &c);

    float D = b*b - 4*a*c;

    if (D < 0) {
        printf("No real roots\n");
        return -1;
    } else {
        if (D == 0) {
            float x = -b / (2*a);
            printf("Only one root is: %.2f\n", x);
            return 0;
        } else {
            float x1 = (-b + sqrt(D)) / (2*a);
            float x2 = (-b - sqrt(D)) / (2*a);
            printf("The roots are %.2f and %.2f\n", x1, x2);
            return 0;
        }
    }
}