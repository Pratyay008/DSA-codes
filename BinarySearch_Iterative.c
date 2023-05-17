#include <stdio.h>


int binarySearch(int arr[], int start, int end, int target)
{
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (arr[mid] == target)
			return mid;

		if (arr[mid] < target)
			start = mid + 1;

		else
			end = mid - 1;
	}

	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int target = 4;
	int result = binarySearch(arr, 0, n - 1, target);

	if(result==-1) 
		printf("Element is not present in array");
	else
		printf("Element is present at index: %d", result);
	printf("\n");
							
	return 0;
}


/*
Time Complexity: O(log N)
Auxiliary Space: O(1)


Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 
*/