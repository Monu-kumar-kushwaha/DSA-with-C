#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum size of the deque

// Double-ended Queue (Deque) structure
typedef struct {
    int front, rear;
    int items[MAX];
} Deque;

// Function to initialize the deque
void initDeque(Deque *dq) {
    dq->front = dq->rear = -1;
}

// Function to check if the deque is empty
int isEmpty(Deque *dq) {
    return dq->front == -1;
}

// Function to check if the deque is full
int isFull(Deque *dq) {
    return (dq->rear + 1) % MAX == dq->front;
}

// Function to insert element at front
void insertFront(Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque Overflow!\n");
        return;
    }
    if (isEmpty(dq)) {
        dq->front = dq->rear = 0;
    } else {
        dq->front = (dq->front - 1 + MAX) % MAX;
    }
    dq->items[dq->front] = value;
}

// Function to insert element at rear
void insertRear(Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque Overflow!\n");
        return;
    }
    if (isEmpty(dq)) {
        dq->front = dq->rear = 0;
    } else {
        dq->rear = (dq->rear + 1) % MAX;
    }
    dq->items[dq->rear] = value;
}

// Function to delete element from front
int deleteFront(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque Underflow!\n");
        exit(EXIT_FAILURE);
    }
    int value = dq->items[dq->front];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1; // Deque is empty after removal
    } else {
        dq->front = (dq->front + 1) % MAX;
    }
    return value;
}

// Function to delete element from rear
int deleteRear(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque Underflow!\n");
        exit(EXIT_FAILURE);
    }
    int value = dq->items[dq->rear];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1; // Deque is empty after removal
    } else {
        dq->rear = (dq->rear - 1 + MAX) % MAX;
    }
    return value;
}

// Function to display the deque
void displayDeque(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deque elements: ");
    int i = dq->front;
    while (1) {
        printf("%d ", dq->items[i]);
        if (i == dq->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    Deque dq;
    initDeque(&dq);
    
    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    displayDeque(&dq);
    
    printf("Deleted from front: %d\n", deleteFront(&dq));
    printf("Deleted from rear: %d\n", deleteRear(&dq));
    displayDeque(&dq);
    
    return 0;
}
