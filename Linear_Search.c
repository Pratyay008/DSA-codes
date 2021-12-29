#include<stdio.h>
int main()
{
    int item, i, result, flag=0;
    int arr[10]={12,32,34,54,34,65,76,89,76,59};
    printf("Enter the element to search :\n");
    scanf("%d", &item);

    for ( i = 0; i < 10; i++)
    {
        if (arr[i]==item)
        {
        // printf("The index of the element is : %d\n", i);
        printf("The position of the element is : %d\n", i+1);
        flag++;
        }
    }   
        if (flag==0)
        {
            printf("Element not found\n");
        }
        
    
    return 0;
}
