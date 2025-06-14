#include<stdio.h>
#include<stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node {
    int data;
    struct Node *next;

};

void linkListTraversal(struct Node *ptr) {
    printf("printing the element of linked list\n");
    while(ptr != NULL) {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue (int val) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL) {
        printf("Queue is full\n");
    }else{
        n->data = val;
        n->next = NULL;
        if(f ==NULL) {
            f=r=n;
        }else{
            r->next = n;
            r = n;
        }
    }
}

int dequeue() {
    int val = -1;
    struct Node *ptr = f;
    if(f == NULL) {
        printf("Queue is empty\n");
    }else{
        f = f->next;
        val = ptr->data;
    }
    return val;
}

int main() {
    linkListTraversal(f);
    printf("dequeueing element %d\n", dequeue());
    enqueue(34);
    enqueue(14);
    enqueue(9);
    enqueue(17);
    printf("dequeueing element %d\n",  dequeue());
    printf("dequeueing element %d\n",  dequeue());
    linkListTraversal(f);
}