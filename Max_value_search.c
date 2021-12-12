#include<stdio.h>
int main()
{
    int arr[5]={6,4,5,8,37}, max,i;
    max=arr[0];
    for (i = 1; i < 5; i++)
    {
     if (arr[i]>max)
     {
         max=arr[i];
     }
        
    }
    printf("Max value is = %d ", max);


    return 0;
}
