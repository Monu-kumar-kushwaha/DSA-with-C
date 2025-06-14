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

int peak(int pos){
    struct node *ptr = top;
    for(int i=0; (i<pos-1 && ptr!=NULL) ;i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}

int main (){
    
    top = push(top, 28);
    top = push(top, 17);
    top = push(top, 15);
    top = push(top, 7);
    
    linkedlistTraversal(top);
    for(int i=1; i<=4; i++){
        printf("The value at position %d is : %d\n", i , peak(i));
    }

    return 0;
}