# MergeSort

Merge Sort is also a type of sorting algorithm that uses Divide and Conquer Strategy. It sorts the array by recursively dividing it into
two subarrays and merging them back together until the whole array is merged

## Algorithm

Step 1: input an array

Step 2: repeat step 3 until no longer possible

Step 3: divide the array into two parts

Step 4: sort each individual array independently

Step 5: repeat step 6 until array is reconstructed

Step 6: sort and merge individual arrays 

Step 7: array is sorted

Step 8: END ALGO

## Pseudo-code
```c
merge(array a, array b)
	temp array c

	while (both arrays have elements)
		if (a[0] > b[0])
			pop and append b[0] to c
		else
			pop and append a[0] to c

	while (a has elements)
		pop and append a[0] to c

	while (b has elements)
		pop and append b[0] to c

	return c

mergesort(array a)
	if length(a) == 1 return a;
	
	arrayOne = a[0]..a[n/2];
	arrayTwo = a[n/2+1]..a[n];
    mergesort(arrayOne);
    mergesort(arrayTwo);

    merge(arrOne, arrayTwo);


main()
	input an array of numbers as arr;
	mergesort(arr, length);
	print the array arr;
```

## Example of Sorting Technique

```c
#include <stdio.h>

#define MAX_N 100

int merge(int* arr, int l, int m, int r) {
	int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int* arr, int l, int r) {

    if (l < r) {
        int m = l + (r - l) / 2;

        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
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

    mergesort(arr, 0, n-1);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}
```

### Output

1.
```bash
How many Elements? 5
> 2
> 54
> 7
> 7
> 3
2 3 7 7 54
```

2.
```bash
How many Elements? 10
> 26 
> 5
> 8
> 23
> 7
> 9
> -3
> -564
> 92
> 058
-564 -3 5 7 8 9 23 26 58 92
```