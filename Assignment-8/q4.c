#include <stdio.h>

int main() {
    void swap_value(int a, int b);
    void swap_ref(int* a, int* b);

    int x, y;
    printf("Two numbers: ");
    scanf("%d %d", &x, &y);

    printf("x=%d, y=%d\n", x, y);

    swap_value(x, y);
    printf("Value Swap: x=%d, y=%d\n", x, y);

    swap_ref(&x, &y);
    printf("Ref Swap: x=%d, y=%d\n", x, y);

    return 0;
}

void swap_value(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void swap_ref(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}