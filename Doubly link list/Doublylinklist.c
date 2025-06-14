#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void LinklistTraversal(struct node *head){
    struct node *ptr = head;

    //Forward Traversal
    printf("Traversing the list of forward direction:\n");
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    //Reverse Traversal
    printf("Traversing the  list of reverse direction:\n");
    while(head != NULL && head->next != NULL){
        head = head->next;
    }
    while(head != NULL){
        printf("Element : %d\n",head->data);
        head = head->prev;
    }
}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    
    // Initialize and link the nodes
    head->data = 12;
    head->next = second;
    head->prev = NULL;

    second->data = 23;
    second->next = third;
    second->prev = head;

    third->data = 34;
    third->next = fourth;
    third->prev = second;

    fourth->data = 45;
    fourth->next = NULL;
    fourth->prev = third;
   
   //Traverse the doubly linked list
   LinklistTraversal(head);
    return 0;

}