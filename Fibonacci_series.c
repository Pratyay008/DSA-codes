#include<stdio.h>
int main()
{
    printf("----------------------Fibonacci Series-------------------\n");
    int a=0, b=1, c, n,count;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    printf("Elements are : \n");
    printf("%d\n%d\n", a, b);
    count=2;
    while (count<n)
    {
        c=a+b;
        printf("%d\n", c);
        a=b;
        b=c;
        count++;
    }
    

    return 0;
}






