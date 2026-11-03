#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define SIZE 20

#include <math.h>

struct stack
{
    int top;
    float data[SIZE];
};

typedef struct stack STACK;

void push(STACK *s, float item)
{
    s->data[++s->top] = item;
}

float pop(STACK *s)
{
    return s->data[(s->top)--];
}

float compute(float oper1, char symbol, float oper2)
{
    switch (symbol)
    {
        case '+': return oper1 + oper2;
        case '-': return oper1 - oper2;
        case '*': return oper1 * oper2;
        case '/': return oper1 / oper2;
        case '^': return pow(oper1, oper2);
    }
}

int main()
{
    char postfix[15];
    float res;
    STACK s;
    s.top = -1;

    printf("\nRead postfix expression\n");
    scanf("%s", postfix);
    res = eval_postfix(&s, postfix);
    printf("\nThe final answer is : %f", res);
    return 0;
}



