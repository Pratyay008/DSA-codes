#include <stdio.h>

int n;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		
		if (arr[j] < pivot) {
			
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		
		int pi = partition(arr, low, high);
		
		quickSort(arr, low, pi - 1);

        for (int i = 0; i < n; i++)
		    printf("%d ", arr[i]);  
		printf("\n");  
        
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);
    n=N;

	quickSort(arr, 0, N - 1);
	printf("Sorted array: \n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}

 


/*
The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot.

This partition is done recursively which finally sorts the array. See the below image for a better understanding.


T(n) = T(k) + T(n-k-1) + \theta    (n)

TC--- O(N logN) ///// n^2
    space--    O(logN)

*/