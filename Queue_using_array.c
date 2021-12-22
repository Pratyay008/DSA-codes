#include<stdio.h>
#include<stdlib.h>
#define maxsize 5           // maximum size of the array will be 5 
int queue[maxsize];  
void enqueue();
void dequeue();
void display();
int front=-1, rear=-1;

int main()
{   int choice;
    printf("--------------Queue using array-------------");
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\nEnter choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        
        default:
            printf("Enter a valid choice");
            break;
        }
    }
    
    return 0;
}

void enqueue()
{
    int item;
    if (rear==maxsize-1)
    {
        printf("\nQueue overflow");
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            rear =0;
            front =0;
        }
        else
        {
            rear++;
        }
        printf("Enter the element : ");
        scanf("%d", &item);
        queue[rear]=item;
    }
}   



void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("\nQueue underflow");
    }   
    else
    {
        printf("Deleted item = %d\n", queue[front]);
        front++;
    }
    
}

void display()
{
    int i;
    if (front==-1 || front>rear)
    {
        printf("\nQueue is Empty");       
    }
    else
    {
        printf("\nElements are :\t");       
        for ( i = front; i <=rear; i++)
        {
            printf("%d\t", queue[i]);       
        }
        printf("\n");       
        
    }
    
}