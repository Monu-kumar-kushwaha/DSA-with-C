#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack *s){
    if(s->top == s->size -1){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    struct stack *s;
    //Allocate momory from the stack struck
    s = (struct stack *)malloc(sizeof(struct stack)); 
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size *sizeof(int *));
    
    // pushing an element manually
    // s->arr[0] = 45;
    // s->top++;

    for(int i = 0; i < s->size; i++) {
        if(!isFull(s)) {
            s->top++;
            s->arr[s->top] = (i + 1) * 10; // Example values to push into the stack
            printf("Pushed %d into the stack\n", s->arr[s->top]);
        } else {
            printf("The stack is full\n");
        }
    }
    
    //Check if stack is empty or not
    if(isEmpty(s)){
        printf("The stack is empty");
    }else{
        printf("The stack is not empty");
    }

    return 0;
}