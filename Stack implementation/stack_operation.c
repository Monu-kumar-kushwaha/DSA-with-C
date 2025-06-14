#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow ! cannot push %d to the stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow! cannot pop %d to the stack\n");
        return -1;

    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main (){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has created successfully\n");

    printf("Before pushing , full :%d\n", isFull(sp));
    printf("Before pushing ,Empyt :%d\n", isEmpty(sp));


    push(sp , 45);
    push(sp , 67);
    push(sp , 79);
    push(sp , 90);
    push(sp , 34);
    push(sp , 22);
    push(sp , 21);
    push(sp , 98);
    push(sp , 23);
    push(sp , 12);  //---pushede 10 value
    // push(sp , 67);  //stack overflow since the size of stack is 10

    printf("After pushing, full :%d\n", isFull(sp));
    printf("After pushing , Empty :%d\n", isEmpty(sp));

    printf("poped %d from the stack\n", pop(sp));  //---Last in first out!
    printf("poped %d from the stack\n", pop(sp));
    printf("poped %d from the stack\n", pop(sp));

    return 0;
}