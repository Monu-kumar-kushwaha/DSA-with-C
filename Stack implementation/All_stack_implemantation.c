#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
//Global variable
struct node *top = NULL;

void linkedlistTraversal(struct node *ptr){
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node *top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct node *top){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        return 1;
    }else{
        return 0;
    }
}

struct node *push(struct node *top, int x){
    if(isFull(top)){
        printf("stack overflow\n");
    }else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

 int pop(struct node **tp){
    if(isEmpty(*tp)){
        printf("stack underflow\n");
    }else{
        struct node *n = *tp;
        *tp = (*tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main (){
    struct node *top = NULL;
    top = push(top, 78);
    top = push(top, 45);
    top = push(top, 23);
    printf("stack element after pushing\n");
    linkedlistTraversal(top);

    // int element =pop(&top);
    int element =pop(&top->next);

    printf("poped element : %d\n", element);
    printf("stack element after poping\n");
    linkedlistTraversal(top);

    return 0;
}