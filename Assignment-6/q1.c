#include <stdio.h>

// Write a C program to read a list of test marks (integers in the range 0-100) of 50  students. Calculate the mean of marks and print a list of marks greater than the mean.

int main() {
    int marks[50];

    int n;
    printf("How many marks: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int m = 0;
        do {
            printf("> ");
            scanf("%d", &m);
        } while(!(m >= 0 && m <= 100));

        marks[i] = m;
    }

    float mean = 0;
    for (int i = 0; i < n; ++i) {
        mean += marks[i];
    }

    mean /= n;

    printf("Mean is: %.2f\n", mean);

    printf("Marks greater than the mean:\n");

    for (int i = 0; i < n; ++i) {
        if ((float) marks[i] > mean) {
            printf("%d\n", marks[i]);
        }
    }

    return 0;
}