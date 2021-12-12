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
    
     int add = 10;
    for (int i = 0; i < length; i++)
        {
            arr[i] = arr[i] + add;
        }

        printf("the new number is = ");

    for (int i = 0; i < length; i++)
        {
        printf("\n%d ", arr[i]);            
        }







    return 0;
}