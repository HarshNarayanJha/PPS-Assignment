#include <stdio.h>

int main() {
    int fibo(int n);

    int n;
    printf("How many terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", fibo(i));
    }

    printf("\n");

    return 0;
}

int fibo(int n) {

    if (n <= 1) {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}