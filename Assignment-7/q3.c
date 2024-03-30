#include <stdio.h>
#include <string.h>

// Write a C program to sort n numbers using ascending order.

int main() {
    int names[100][20];

    int n;
    printf("How many names: ");
    scanf("%d", &n);

    char _c;
    scanf("%c", &_c);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        fgets(&names[i], 20, stdin);
        // gets(names[i]);
    }

    for (int i = 0; i < n; ++i) {
        int swapped = 0;
        for (int t = 0; t < n-1; ++t) {
            if (strcmp(names[t], names[t+1]) > 0) {
                char temp[20];
                strncpy(temp, names[t], 20);
                strncpy(names[t], names[t+1], 20);
                strncpy(names[t+1], temp, 20);

                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%s", names[i]);
    }

    return 0;
}