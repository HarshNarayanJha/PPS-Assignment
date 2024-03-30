#include <stdio.h>

#define MAX_N 20

int main() {

    int binary_search(int arr[], int l, int r, int s);

    int arr[MAX_N];
    int n;
    printf("How many elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    // Sort
    printf("Sorting.. \n");
    for (int i = 0; i < n; ++i) {
        int swapped = 0;
        for (int t = 0; t < n-1; ++t) {
            if (arr[t] > arr[t+1]) {
                int temp = arr[t];
                arr[t] = arr[t+1];
                arr[t+1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    int s;
    printf("What to search: ");
    scanf("%d", &s);
    
    int found = binary_search(arr, 0, n - 1, s);

    if (found == -1) {
        printf("Not found anywhere\n");
    } else {
        printf("Found at position  %d\n", found);
    }
}

int binary_search(int arr[], int l, int r, int s) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == s) {
            return m;
        }

        if (arr[m] < s) {
            return binary_search(arr, m+1, r, s);
        } else {
            return binary_search(arr, l, m-1, s);
        }
    }

    return -1;
}