#include<stdio.h>
int main()
{  
    printf("---------------Insert one element in array--------------\n");
    int x, n, temp;
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("Enter the position : ");
    scanf("%d", &n);
    if (n>=1 && n<=9)
    {
        printf("Enter the element : ");
        scanf("%d", &x);
        
        for (int i = n-1; i < 9; i++)
        {
            temp = arr[i];
            arr[i] = x;
            x = temp;
        }

        printf("The new elements are :\n");
        for (int i = 0; i < 9; i++)
        {
            printf("%d\n", arr[i]);
            
        }
    }
    else
    {
        printf("Wrong position\n");
    }
    return 0;
}




