#include<stdio.h>
int stack[100], top, n, x, i, choice;
void push();
void pop();
void display();
void exit();

int main()
{
    top=-1;
    printf("Enter the size of stack :\n");
    scanf("%d", &n);
    printf("Choose the operation :\n");
    printf("1.PUSH   2.POP   3.DISPLAY   4.EXIT\n");
    while (1)
    {
        printf("Enter the choice :\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
               exit(0);
            }
            
            default:
            {
                printf("Enter a valid choice 1/2/3/4");
                break;
            }   
        }
    } 
       
        return 0;
}


void push()
{
    if (top==n-1)
    {
        printf("Stack is overflow/full\n");        
    }
    else
    {
        printf("Enter the element to be pushed : \n");
        scanf("%d", &x);
        top++;
        stack[top]=x;

    }
    
}

void pop()
{
    if (top==-1)
    {
        printf("Stack is underflow/empty\n");        
    }
    else
    {
        printf("The popped element is : %d\n", stack[top]);
        top--;
    }
    
}

void display()
{
    if (top >-1)
    {
        printf("The elements in Stack are : \n");   
        for ( i = top; i >=0; i--)
        {
           printf("%d\n", stack[i]);
        }
        printf("Next choice : \n");   
         

    }
    else
    {
        printf("Stack is empty\n");
    }
    
}



