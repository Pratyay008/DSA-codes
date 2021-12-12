#include<stdio.h>
int main()
{
    int arr[10]={4,8,6,42,3,98,51,7,2,19},min,i;
    min=arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    printf("Min value is = %d ", min);
    
    
    return 0;
}
