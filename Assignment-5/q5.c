#include <stdio.h>

// Write a C program to find the biggest of given n numbers

int main() {
    int nums[100];

    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &nums[i]);
    }

    int big = nums[0];
    for (int i = 0; i < n; ++i) {
        if (nums[i] > big) {
            big = nums[i];
        }
    }

    printf("Biggest is : %d\n", big);

    return 0;
}
