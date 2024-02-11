#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int n;

    float y;

    printf("Enter values of x and n: ");
    scanf("%f %d", &x, &n);

    switch(n) {
        case 1:
            y = 1+x;
            break;
        case 2:
            y = 1 + x / n;
            break;
        case 3:
             y = 1 + pow(x, n);
            break;
        default:
            y = 1+ x*n;
            break;
    }

    printf("Y(%.2f, %d) = %.2f\n", x, n, y);

    return 0;
}