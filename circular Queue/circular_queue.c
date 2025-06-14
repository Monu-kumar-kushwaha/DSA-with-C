#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularqueue *q) {
    if(q->r == q->f) {
        return 1;
    }else{
        return 0;
    }
} 

int isFull(struct circularqueue *q) {
    if((q->r +1) % q->size == q->f) {
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct circularqueue *q, int val) {
    if(isFull(q)){
        printf("circular Queue is full\n");
    }else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
        printf("Enqueue Element is : %d\n", val);
    }

}

int Dequeue(struct circularqueue *q) {
    int a = -1;
    if(isEmpty(q)) {
        printf("circular Queue is empty\n");
    }else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    struct circularqueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size *sizeof(int));

    // enqueue few element
    // enqueue(&q, 12);
    // enqueue(&q, 54);
    // enqueue(&q, 34);
    printf("Dequeue element is : %d\n",  Dequeue(&q));
    printf("Dequeue element is : %d\n",  Dequeue(&q));
    printf("Dequeue element is : %d\n",  Dequeue(&q));
    // enqueue(&q, 45);
    // enqueue(&q, 45);
    // enqueue(&q, 45);

    if(isEmpty(&q)) {
        printf("circular queue is Empty\n");
    }else{
        printf("circular queue is  Full\n");
    }
    return 0;
}
