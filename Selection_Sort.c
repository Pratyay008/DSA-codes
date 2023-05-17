#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j;

    for (i = 0; i < n-1; i++)   
    {  

        for (j = i+1; j < n; j++){

        for (int k = 0; k < n; k++)  
            printf("%d ", arr[k]);  
        printf("\n ");  

        if (arr[i] > arr[j]) {  
        int temp = arr[j];  
        arr[j] = arr[i];  
        arr[i] = temp;  
            }
        }  
    }  
}

void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  


int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Sorting array elements step by step - \n");  

    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    return 0;  
}   


/*

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. One variation of selection sort is called “Bidirectional selection sort” which goes through the list of elements by alternating between the smallest and largest element, this way the algorithm can be faster in some cases.

TC-----  O(n^2)
Space----  O(1)

*/