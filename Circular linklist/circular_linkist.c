#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Linkedlisttraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    // At this point p point to the last node of this circular link list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory from node in the  linklist in heap

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second node

    head->data = 4;
    head->next = second;

    // Link second and third node

    second->data = 3;
    second->next = third;

    // Link third and fourth node

    third->data = 6;
    third->next = fourth;

    // Terminate the list at third node

    fourth->data = 1;
    fourth->next = head;

    printf("circular link list before insertion\n");
    Linkedlisttraversal(head);

    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 55);
    printf("circular link list after insertion\n");
    Linkedlisttraversal(head);
    return 0;
}