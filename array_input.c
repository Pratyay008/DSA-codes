#include <stdio.h>

int main()
{
    int arr[30], length, i;
    printf("enter the length of array: ");
    scanf("%d", &length);
    printf("enter the elements of array: \n");
    for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]);       
        }
    
    printf("array elements are ");
    for (int i = 0; i < length; i++)
        {
        printf(" %d ", arr[i]);
        }







    return 0;
}