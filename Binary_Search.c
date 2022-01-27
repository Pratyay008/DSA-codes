#include<stdio.h>
void bin_ser(int *arr, int item, int i, int first, int last, int middle, int flag)
{
    first=0;
    last=9;
    middle= (first+last)/2;
    for (i=0; i<9; i++)
    {
        if (arr[middle]>item)
        {
            last=middle-1;
            middle= (first+last)/2;
        }
        else if (arr[middle]==item)
        {
            printf("The element position is : %d\n", middle+1);
            flag++;
            break;
        }
        else  if (arr[middle]<item)
        {
            first=middle+1;   
            middle= (first+last)/2;
        }
         
    }
    
   if (flag==0)
   {
        printf("The element is not present\n");
   }
   
}

int main()
{   
    printf("------------------Binary Search using function---------------------\n");
    int item, i, first, last, middle, flag=0;
    int arr[10]={11,23,35,43,59,62,76,83,91,108};
    printf("Enter the element to search :\n");
    scanf("%d", &item);
    bin_ser(arr, item, i, first, last, middle, flag);
    return 0;
}







// -----------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int item, i, result, first, last, middle, flag=0;
//     int arr[10]={11,23,35,43,59,62,76,83,91,108};
//     printf("Enter the element to search :\n");
//     scanf("%d", &item);
//     first=0;
//     last=9;
//     middle= (first+last)/2;
//     for (i=0; i<9; i++)
//     {
//         if (arr[middle]>item)
//         {
//             last=middle-1;
//             middle= (first+last)/2;
//         }
//         else if (arr[middle]==item)
//         {
//             printf("The element position is : %d\n", middle+1);
//             flag++;
//             break;
//         }
//         else  if (arr[middle]<item)
//         {
//             first=middle+1;   
//             middle= (first+last)/2;
//         }
         
//     }
    
//    if (flag==0)
//    {
//         printf("The element is not present");
//    }
   
//     return 0;
// }
