#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", *(arr+(n-i-1)));
    }

    printf("\n");
}
