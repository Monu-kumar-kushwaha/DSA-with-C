#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum size of the queue

// Circular Queue structure
typedef struct {
    int front, rear;
    int items[MAX];
} CircularQueue;

// Function to initialize the circular queue
void initQueue(CircularQueue *q) {
    q->front = q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue *q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(CircularQueue *q) {
    return (q->rear + 1) % MAX == q->front;
}

// Function to enqueue an element
void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX;
    }
    q->items[q->rear] = value;
}

// Function to dequeue an element
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow!\n");
        exit(EXIT_FAILURE);
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1; // Queue is empty after removing last element
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return value;
}

// Function to display the queue
void displayQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    initQueue(&q);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);
    
    printf("Dequeued: %d\n", dequeue(&q));
    displayQueue(&q);
    
    return 0;
}
