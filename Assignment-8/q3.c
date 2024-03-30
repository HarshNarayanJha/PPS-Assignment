#include <stdio.h>

int main() {
    int fibbo(int n);

    int n = 6;
    printf("%dth Fibbonacci: %d\n", n, fibbo(n));
    return 0;

    int upto;
}

int fibbo(int n) {

    if (n <= 1) {
        return n;
    }

    return fibbo(n-1) + fibbo(n-2);
}