#include <stdio.h>

int main() {

    int a, b, c;

    printf("\nEnter numbers a b c to find largest: ");

    scanf("%d %d %d", &a, &b, &c);

    int big = a;

    if (b > big)
        big = b;
    
    if (c > big)
        big = c;

    printf("Largest is %d\n", big);
}