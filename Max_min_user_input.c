#include<stdio.h>
int main()
{
    int arr[40], length, max, min, ele;
    printf("enter the length of array: ");
    scanf("%d", &length);
    printf("enter the elements of array: \n");
    
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);       
    }
    max=min=arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        else if (arr[i]<min)
        {
            min=arr[i];
        }        
    }
        printf("Max value is = %d \n", max);
        printf("Min value is = %d ", min);
    


    return 0;
}
