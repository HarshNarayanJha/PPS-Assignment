#include <stdio.h>
#include <math.h>

int main() {

    int a, b;

    printf("\nEnter range a and b: ");

    scanf("%d %d", &a, &b);

    for (int i = a; i < b+1; ++i) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else{
            printf("%d is odd\n", i);
        }
    }
}