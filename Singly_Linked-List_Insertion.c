#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;                       // data, *next structure members
    struct node *next;
};

void TraverseLL(struct node *ptr)
{
    while (ptr != NULL)              // until NULL
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;             // pointing to next node
    }
}


struct node * InsertAtBeg(struct node *head , int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));  
    ptr->data=data;
    ptr->next=head;
    return ptr;  
}

struct node * InsertAtEnd(struct node *head , int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));  
    ptr->data=data;
    struct node *p = head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->next=NULL;
    return head;  
}

struct node * InsertAtIndex(struct node *head , int data, int index)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));  
    ptr->data=data;
    struct node * p =head;
    int i=1;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;   
}

struct node * InsertAfterNode(struct node *head , struct node *pre_node , int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));  
    ptr->data=data;
    ptr->next=pre_node->next;
    pre_node->next=ptr;
    return head;  
}


int main()
{
    /* Initialize nodes */
    struct node *head;         // define structure pointer
    struct node *second;
    struct node *third;
    struct node *fourth;

    /* Allocate memory */
    head = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation in heap
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 43;     /* Assign data values */
    head->next = second; /* Connect nodes */

    second->data = 28;
    second->next = third;

    third->data = 75;
    third->next = fourth;

    fourth->data = 35;
    fourth->next = NULL;

    printf("Linked List before insertion : \n");
    TraverseLL(head);

    // head=InsertAtBeg(head, 243);
    head=InsertAtEnd(head, 124);
    // head=InsertAtIndex(head, 344, 3);
    // head=InsertAtIndex(head, 555, 2);
    printf("Linked List after insertion : \n");
    TraverseLL(head);
    
    // head=InsertAfterNode(head, third, 584);
    // head=InsertAfterNode(head, second, 951);
    // printf("Linked List after insertion : \n");
    // TraverseLL(head);


    return 0;
}
