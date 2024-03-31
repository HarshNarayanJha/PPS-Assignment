#include <stdio.h>

#define MAX_N 100

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int l, int r) {
	int pivot = arr[r];
	int* i = arr + l - 1;
    int* j = arr + l;
	
	while (j < arr + r) {
		if (*j < pivot) swap(++i, j);
		j++;
	}
	
	swap(++i, j);
	return i - arr;
}

void quicksort(int* arr, int l, int r) {

    if (l >= r) return;
    int pivot = partition(arr, l, r);

    quicksort(arr, l, pivot - 1);
    quicksort(arr, pivot + 1, r);
}

int main() {
    int arr[MAX_N];

    int n;
    printf("How many Elements? ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("> ");
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n-1);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}