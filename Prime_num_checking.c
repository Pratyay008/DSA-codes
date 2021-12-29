#include<stdio.h>

void prime(int n, int i , int count)
{  
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    
       if (count==2)
       {
           printf("It's a prime number\n");
       }
       else
       {
           printf("Not a prime number\n");
       }      
}


int main()
{
    int n, i, count=0;
    printf("Enter a number : \n");
    scanf("%d", &n);
    prime(n,i,count);
   
    return 0;
}
