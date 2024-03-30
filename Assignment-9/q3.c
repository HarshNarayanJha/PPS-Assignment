#include <stdio.h>

int main() {
    int arr[100];
    int n;

    int* ptr;

    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    ptr = arr + n - 1;

    for (int i = 0; i < n; ++i) {
        printf("%d ", *ptr);
        --ptr;
    }

    printf("\n");
}
