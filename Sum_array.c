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
    
    int sum = 0;
    for (int i = 0; i < length; i++)
        {
            sum = sum +arr[i];
        }

        printf("the sum is = %d ", sum);






    return 0;
}