# MergeSort

Merge Sort is also a type of sorting algorithm that uses Divide and Conquer Startegy. It sorts the array by recursively dividing it into
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
// mergesort pseudo-code

merge(array a, array b)
	temp array c

	while (both arrays have elements)
		if (a[0] > b[0])
			pop and append b[0] to c
		else
			pop and append a[0] to c

	// now either a or b is empty

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


### Output