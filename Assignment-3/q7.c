#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers to calculate GCD of: ");
    scanf("%d %d", &a, &b);

    int div_a[256];
    int div_b[256];

    int ca = 0;
    for (int n = 1; n < a; ++n) {
        if (a % n == 0) {
            div_a[ca] = n;
            ++ca;
        }
    }

    printf("Factors of %d: ", a);
    for (int p = 0; p < ca; ++p) {
        printf("%d ", div_a[p]);
    }
    printf("\n");

    int cb = 0;
    for (int n = 1; n < b; ++n) {
        if (b % n == 0) {
            div_b[cb] = n;
            ++cb;
        }
    }

    printf("Factors of %d: ", b);
    for (int p = 0; p < cb; ++p) {
        printf("%d ", div_b[p]);
    }
    printf("\n");

    int common[256];
    int cc = 0;

    for (int n = 0; n < ca; ++n) {
        int curr_a = div_a[n];

        for (int m = 0; m < cb; ++m) {
            if (curr_a == div_b[m]) {
                common[cc] = curr_a;
                ++cc;
            }
        }
    }

    printf("Common factors of %d and %d: ", a, b);
    for (int p = 0; p < cc; ++p) {
        printf("%d ", common[p]);
    }
    printf("\n");

    printf("GCD of %d and %d is %d\n", a, b, common[cc-1]);

    return 0;
}