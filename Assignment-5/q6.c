#include <stdio.h>

// Write a C program to find the sum and average of n numbers

int main() {
    int nums[100];

    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &nums[i]);
    }

    float sum;
    float avg;
    sum = 0;
    avg = 0;

    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }

    avg = (float) sum / n;

    printf("Sum is: %.2f and Average: %.2f\n", sum , avg);

    return 0;
}