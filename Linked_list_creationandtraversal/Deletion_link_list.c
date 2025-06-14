#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Linklisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// CASE 01: Deletion the first element at givem index from the link list
struct node *deletingAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// CASE 02: Deleting the index at given index from the link list
struct node *deletingAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// CASE 03: Deleting the last element
struct node *deletingAtlast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL){
            p = p->next;
            q = q->next;
        }

        p->next = NULL;
        free(q);
        return head;
    }

    // CASE 04 : Deleting the element with the given value from the link list

    struct node * deletinggiven_value(struct node *head , int value){
        struct node *p =  head;
        struct node *q = head->next;
        while(q->data != value && q->next != NULL){

            p = p->next;
            q = q->next;
        }
        if(q->data == value){
            p->next = q->next;
            free(q);
        }
            return head;
    }


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link the nodes and assign data
    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next = third;
    

    third->data = 56;
    third->next = fourth;

    fourth->data = 67;
    fourth->next = NULL;

    printf("Linklist before Deletion:\n");
    Linklisttraversal(head);
    // Deleting the first element
    //  head = deletingAtFirst(head);

    // Deleting the element in index 2
    // head = deletingAtIndex(head, 1);

    //Deleting the last element
    // head = deletingAtlast(head);

    //Deleting the given value
    head = deletinggiven_value(head,56);

    printf("\nLinklist after Deletion:\n");
    Linklisttraversal(head);

    return 0;
}
