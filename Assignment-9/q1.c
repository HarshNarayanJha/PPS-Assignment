#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 5, 8, 10, 100, 20, -1, 0, 99};

    int* ptr;

    int sum;
    sum = 0;

    ptr = arr;

    for (int i = 0; i < 10; ++i) {
        printf("%d ", *ptr);
        sum += *ptr;
        ++ptr;
    }

    printf("\nSum is %d\n", sum);
}