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

int main()
{
    /* Initialize nodes */
    struct node *head;         // define structure pointer
    struct node *second;
    struct node *mid;          // define new mid element
    struct node *third;
    struct node *fourth;

    /* Allocate memory */
    head = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation in heap
    second = (struct node *)malloc(sizeof(struct node));
    mid=(struct node*)malloc(sizeof(struct node));     // memory allocation of new mid element
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 13;     /* Assign data values */
    head->next = second; /* Connect nodes */

    second->data = 22;
    second->next = mid;

    // Just change the previous next pointer and assign data & next
    mid->data=89;         
    mid->next=third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 35;
    fourth->next = NULL;

    TraverseLL(head);

    return 0;
}
