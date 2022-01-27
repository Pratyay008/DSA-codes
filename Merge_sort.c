#include<stdio.h>
void mergesort(int arr[] , int i, int j);
void merge();

int main()
{
    int arr[50], n, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements one by one : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("List before sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    mergesort(arr,0,n-1);

    printf("\nList after merge sort : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }   
    return 0;
}


void mergesort(int arr[] , int i, int j)
{
    int mid;
    if (i<j)
    {
        mid=(i+j)/2;
        mergesort();
    }    
}

void merge()
{

}


