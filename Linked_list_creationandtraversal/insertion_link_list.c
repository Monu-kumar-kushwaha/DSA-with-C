#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Linkedlisttraversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}


// CASE 01 
struct node * insertAtFirst (struct node * head, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr -> next = head;
    ptr ->data = data;
    return ptr;
}


//CASE 02
struct node * insertAtIndex(struct node *head , int data , int index){
    struct node * ptr =(struct node *) malloc (sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


// CASE 03
struct node *insertAtEnd(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}


//CASE 04
struct node *insertAfternode(struct node *head, struct node *prevnode, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    
    ptr->next = prevnode->next;
    prevnode->next = ptr;

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

    head->data = 7;
    head->next = second;

    // Link second and third node

    second->data = 11;
    second->next = third;

    // Link third and fourth node

    third->data = 42;
    third->next = fourth;

    // Terminate the list at third node

    fourth->data = 66;
    fourth->next = NULL;


    printf("linklist before insertion\n");
    Linkedlisttraversal(head);
    // head = insertAtFirst(head ,45);
    // head = insertAtIndex(head,45,1);
    // head = insertAtEnd(head, 45);
    head = insertAfternode(head,third,45);

    printf("\nlinklist after insertion\n");
    Linkedlisttraversal(head);
    return 0;
}

