#include <stdio.h>
int n;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void heapify(int arr[], int N, int i)
{

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < N && arr[left] > arr[largest])
		largest = left;

	if (right < N && arr[right] > arr[largest])
		largest = right;

	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}

void heapSort(int arr[], int N)
{
	//max heap
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);

	for (int i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);

        for (int i = 0; i < n; i++)
		    printf("%d ", arr[i]);  
		printf("\n"); 

		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
    n=N;

	heapSort(arr, N);
	printf("Sorted array is\n");
	printArray(arr, N);
}



/*

Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.


Heapify is the process of creating a heap data structure from a binary tree represented using an array. It is used to create Min-Heap or Max-heap. Start from the last index of the non-leaf node whose index is given by n/2 – 1. Heapify uses recursion.

TC--  O(n log n)
space--- O(n)

inplace algo as it does not take any extra place

unstable  as same element can be in any place

*/