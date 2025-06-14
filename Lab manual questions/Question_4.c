#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  // Maximum size of stack and queue

// Stack structure
typedef struct {
    int top;
    char items[MAX];
} Stack;

// Queue structure
typedef struct {
    int front, rear;
    char items[MAX];
} Queue;

// Stack functions
void initStack(Stack *s) {
    s->top = -1;
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->items[++(s->top)] = value;
}

char pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Stack Underflow!\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}

// Queue functions
void initQueue(Queue *q) {
    q->front = q->rear = -1;
}

int isQueueEmpty(Queue *q) {
    return q->front == -1;
}

void enqueue(Queue *q, char value) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (isQueueEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }
    q->items[q->rear] = value;
}

char dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue Underflow!\n");
        exit(EXIT_FAILURE);
    }
    char value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return value;
}

// Function to check if a string is a palindrome using stack and queue
int isPalindrome(char *str) {
    Stack s;
    Queue q;
    initStack(&s);
    initQueue(&q);
    
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        push(&s, str[i]);
        enqueue(&q, str[i]);
    }
    
    for (int i = 0; i < length; i++) {
        if (pop(&s) != dequeue(&q)) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
