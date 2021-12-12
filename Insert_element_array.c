#include<stdio.h>
int main()
{
    // at 4th position
    int arr[8]={1,4,3,6,8,5,8,7};
    int temp;
    for (int i = 3; i < 8; i++)
    {
        temp=arr[i];
    }
        int new_element;
        printf("enter the element : ");
        scanf("%d", &new_element);
        arr[3]=new_element;

        for (int i = 0; i < 8; i++)
    {
        printf("The new elements are : %d\n", arr[i]);
        
    }



    
    return 0;
}
