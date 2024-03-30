#include <stdio.h>

int main() {
    int arr[100];
    int n;

    int* ptr;

    printf("How many numbers: ");
    scanf("%d", &n);

    float avg;
    avg = 0;


    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (int i = 0; i < n; ++i) {
        printf("%d ", *ptr);
        avg += *ptr;

        ++ptr;
    }

    avg /= n;

    printf("\nAverage is %.2f\n", avg);
}