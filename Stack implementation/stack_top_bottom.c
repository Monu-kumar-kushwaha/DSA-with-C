#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow ! cannot push %d to the stack\n" , val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow! cannot pop to the stack\n" );
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peak(struct stack *sp, int i)
{
    int arrayind = sp->top - i + 1;
    if (arrayind < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayind];
    }
}


int stackBottom(struct stack *sp){
    return sp->arr[0];
}

int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}

int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 40;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has created successfully\n");

    printf("Before pushing , full :%d\n", isFull(sp));
    printf("Before pushing ,Empty :%d\n", isEmpty(sp));

    push(sp, 45);
    push(sp, 67);
    push(sp, 79);
    push(sp, 90);
    push(sp, 34);
    push(sp, 22);
    push(sp, 21);
    push(sp, 98);
    push(sp, 23);
    push(sp, 12);
    push(sp, 59);

   printf("The Top most value of this stack value is %d\n", stackTop(sp));
   printf("The Bottom most value of this stack value is %d\n", stackBottom(sp));

    return 0;
}