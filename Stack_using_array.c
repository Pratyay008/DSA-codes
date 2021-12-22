#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int stack[5], top;
void push();
void pop();
void display();

int main()
{   
    printf("--------------Stack using array-------------\n");
    top=-1;
    printf("Choose the operation :\n");
    while (1)
    {
        int choice;
        printf("1.PUSH   2.POP   3.DISPLAY   4.EXIT\n");
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
{   int element;
    if (top==maxsize-1)
    {
        printf("Stack is overflow/full\n");        
    }
    else
    {
        printf("Enter the element to be pushed : \n");
        scanf("%d", &element);
        top++;
        stack[top]=element;

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
    int i;
    if (top >-1)
    {
        printf("The elements in Stack are : \n");   
        for ( i = top; i >=0; i--)
        {
           printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
        printf("Next choice : \n");   
    
}



