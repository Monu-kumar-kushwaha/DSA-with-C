#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node *next;
};

// Define front and rear pointers
struct Node *front = NULL;
struct Node *rear = NULL;

// Function to traverse and print deque elements
void traverse() {
    struct Node *ptr = front;
    if (ptr == NULL) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Insert element at the front
void insertFront(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow! Cannot insert\n");
        return;
    }
    newNode->data = val;
    newNode->next = front;
    front = newNode;
    if (rear == NULL) {  // If inserting first element
        rear = front;
    }
    printf("Inserted %d at Front\n", val);
}

// Insert element at the rear
void insertRear(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow! Cannot insert\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (rear == NULL) {  // If deque is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted %d at Rear\n", val);
}

// Delete element from the front
void deleteFront() {
    if (front == NULL) {
        printf("Deque is empty! Cannot delete\n");
        return;
    }
    struct Node *temp = front;
    front = front->next;
    printf("Deleted %d from Front\n", temp->data);
    free(temp);
    if (front == NULL) { // If deque becomes empty
        rear = NULL;
    }
}

// Delete element from the rear
void deleteRear() {
    if (rear == NULL) {
        printf("Deque is empty! Cannot delete\n");
        return;
    }
    struct Node *temp = front;
    if (front == rear) { // Only one element in deque
        printf("Deleted %d from Rear\n", rear->data);
        free(rear);
        front = rear = NULL;
        return;
    }
    while (temp->next != rear) { // Find second last node
        temp = temp->next;
    }
    printf("Deleted %d from Rear\n", rear->data);
    free(rear);
    rear = temp;
    rear->next = NULL;
}

// Main function to test deque
int main() {
    traverse();

    deleteFront();  // Attempting deletion on empty deque

    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(2);
    traverse();

    deleteFront();
    deleteRear();
    traverse();

    insertFront(15);
    insertRear(25);
    traverse();

    deleteFront();
    deleteRear();
    traverse();

    return 0;
}
