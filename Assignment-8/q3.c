#include <stdio.h>

int main() {
    int fibbo(int n);

    int n;
    printf("How many terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n + 1; ++i) {
        printf("%d ", fibbo(i));
    }

    printf("\n");

    return 0;
}

int fibbo(int n) {

    if (n <= 1) {
        return n;
    }

    return fibbo(n-1) + fibbo(n-2);
}