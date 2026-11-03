#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int data[SIZE], top = -1;

void push(int item)
{
    if (top == SIZE - 1)
    {
        printf("\n stack overflow");
    }
    else
    {
        top = top + 1;
        data[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("\n element poped is %d", data[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n stack contains are:");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", data[i]);
        }
    }
}

int main()
{
    int choice, item;

    while (1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter element to be push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\n Invalid choice");
        }
    }

    return 0;
}
