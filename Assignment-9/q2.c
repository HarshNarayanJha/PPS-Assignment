#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("How many numbers: ");
    scanf("%d", &n);

    float avg;
    avg = 0;

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", *(arr+i));
        avg += *(arr+i);
    }

    avg /= n;

    printf("\nAverage is %.2f\n", avg);
}