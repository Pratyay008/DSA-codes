#include <stdio.h>

int main()
{
    int arr[2], i;   
    printf("enter the elements of array: \n");
    for (int i = 0; i < 2; i++)
        {
            scanf("%d", &arr[i]);       
        }
    
        int temp = arr[0];
        arr[0]=arr[1];
        arr[1]=temp;

        printf("Now the elements are: %d and %d \n", arr[0], arr[1]);

        //----------- Or, using for loop---------------
        // printf("Now the elements are: \n");
        // for (int i = 0; i < 2; i++)
        // {
        //     printf("%d\n", arr[i]);                  
        // }






    return 0;
}