#include <stdio.h>

int main() {
    int add(int n);

    int upto;
    upto = 20;

    int res = add(upto);

    printf("%d\n", res);
}

int add(int n) {
    if (n == 1) {
        return 1;
    }

    return n + add(n-1);
}