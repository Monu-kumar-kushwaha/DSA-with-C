#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;

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

void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf("stack overflow ! cannot push %d to the stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow! cannot pop %d to the stack\n");
        return -1;

    }else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char parenthesismatch(char *exp){
// create and initialize the stack
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size *sizeof(char));


    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(sp , '(');
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isEmpty(sp)){
        return 1;
    }else{
        return 0;
    }
}



int main (){

char * exp = "(8*9)&8*5-(7+5)";
//check if stack is empty
if(parenthesismatch(exp)){
    printf("This parenthesis is matching");
}
else{
    printf("This parenthesis is not matching");
}
    
    return 0;
}