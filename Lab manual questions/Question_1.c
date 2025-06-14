#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 200

// Stack implementation using array
typedef struct
{
    int top;
    int arr[MAX];
} Stack;

void push(Stack *s, int value)
{
    if (s->top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

int pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->arr[(s->top)--];
}

int evaluatePostfix(const char *exp)
{
    Stack s;
    s.top = -1;
    int i, operand1, operand2, result;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit(exp[i]))
        {
            push(&s, exp[i] - '0');
        }
        else
        {
            operand2 = pop(&s);
            operand1 = pop(&s);

            switch (exp[i])
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 == 0)
                {
                    printf("Division by zero error\n");
                    exit(1);
                }
                result = operand1 / operand2;
                break;
            default:
                printf("Invalid Operator\n");
                exit(1);
            }
            push(&s, result);
        }
    }
    return pop(&s);
}

int main()
{
    char postfixExp[MAX];
    printf("Enter postfix expression: ");
    scanf("%s", postfixExp);

    int result = evaluatePostfix(postfixExp);
    printf("Result: %d\n", result);
    return 0;
}
