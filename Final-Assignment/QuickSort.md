# Quick Sort

Quick Sort is a type of sorting algorithm that uses Divide and Conquer Startegy. It sorts the array by recursively dividing it into
two subarrays until the whole array is sorted

## Algorithm

Step 1: set l <- 0 and r <- length of array - 1

Step 2: if l >= r, break the recursion

Step 3: set pivot <- last element of the array

Step 4: set two indexes, i before the start and j at the start of the array

Step 5: while j < pivot repeat steps 6 to 7

Step 6: if current j < pivot, increment i and swap i and j

Step 7: increment j

Step 8: once j reaches end, swap pivot with i + 1

Step 9: repeat steps 2 to 8 with two parts of array, 

		(i) l = 0 and r = pivot -1

		(ii) l = pivot + 1 and r = length - 1;
	
Step 10: array is sorted

Step 11: END ALGO


## Pseudo-code
```c
// quicksort pseudo-code

integer partition(array arr, integer l, integer r) {
	pivot = last element of arr;
	i = index before arr first index;
	j = arr first index;
	
	while j < second_last_index {
		if value at j < pivot {
			increment i;
			swap i and j;
		}
		increment j;
	}
	
	increment i;
	swap i and j;
	
	return index i;
}

quicksort(array arr, integer l, integer r) {
	if l >= r return;
	
	pivot = partition(arr, l, r);
	quicksort(arr, l, pivot-1);
	quicksort(arr, pivot+1, r);
}

main() {
	input an array of numbers as arr;
	quicksort(arr, 0, length-1);
	print the array arr;
}
```

## Example of Sorting Technique

```c
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
	
	while (j < arr+r) {
		if (*j < pivot) swap(++i, j);
		j++;
	}
	
	swap(++i, j);
	return i-arr;
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
```

### Output

1.
```bash
How many Elements? 5
> 4
> 2
> 1
> -10
> 9
-10 1 2 4 9

NOTES: runtime ->
________________________________________________________
Executed in    3.62 secs      fish           external
   usr time   32.07 millis  271.00 micros   31.80 millis
   sys time   25.63 millis  137.00 micros   25.49 millis
```

2.
```bash
How many Elements? 10
> 3
> 6598
> 274
> 271
> 91
> -183
> -183
> 384
> 281
> 9
-183 -183 3 9 91 271 274 281 384 6598

NOTES: runtime ->
________________________________________________________
Executed in    6.63 secs      fish           external
   usr time   43.87 millis  210.00 micros   43.66 millis
   sys time   28.02 millis  165.00 micros   27.86 millis
```

