#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if (l <= r) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		else if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
			
		else
			return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}


int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	
	if(result==-1) 
		printf("Element is not present in array");
	else
		printf("Element is present at index: %d", result);
	printf("\n");

	return 0;
}


/*

Time Complexity: O(logN)
Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 
*/