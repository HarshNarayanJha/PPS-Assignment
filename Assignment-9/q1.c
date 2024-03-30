#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 5, 8, 10, 100, 20, -1, 0, 99};

    int sum;
    sum = 0;

    for (int i = 0; i < 10; ++i) {
        printf("%d ", *(arr+i));
        sum += *(arr+i);
    }

    printf("\nSum is %d\n", sum);
}