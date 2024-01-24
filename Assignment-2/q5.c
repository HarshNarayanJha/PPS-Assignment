#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &x, &y);

    int temp;

    printf("Before Swap: x = %d y = %d\n", x, y);

    temp = y;
    y = x;
    x = temp;

    printf("After Swap: x = %d y = %d\n", x, y);

    return 0;
}