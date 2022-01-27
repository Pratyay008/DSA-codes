#include<stdio.h>
int main()
{
    int arr[50], i, j, n, temp;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the of elements : \n");
    for ( i = 0; i < n; i++)
    {
         scanf("%d", &arr[i]);
    }
    

    printf("Before Bubble sort elements are -> \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
      for ( j = i+1; j < n; j++)
      {
         if (arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
         
      }
      
    }
    
        printf("After Bubble sort elements are -> \n");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }


    return 0;
}
