#include <stdio.h>

// Write a C program to sort n numbers using ascending order.

int main() {
    int nums[100];

    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; ++i) {
        int swapped = 0;
        for (int t = 0; t < n-1; ++t) {
            if (nums[t] > nums[t+1]) {
                int temp = nums[t];
                nums[t] = nums[t+1];
                nums[t+1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", nums[i]);
    }

    return 0;
}