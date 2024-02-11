#include <stdio.h>
#include <math.h>

// y = 1.36 * sqrt( 1+x+pow(x, 3) ) + pow(x, 0.25) + exp(x)
// for x = 1.0 to 3.0 in steps of 0.2
// print a table for all values of x

int main() {
    printf("x\ty\n");
    for (int i = 10; i <= 30; i+=2) {
        float x = (float) i / 10;
        float y = 1.36 * sqrt(1 + x + pow(x, 3)) + pow(x, 0.25) + exp(x);

        printf("%.1f\t%.2f\n", x, y);
    }

    printf("\n");

    return 0;
}