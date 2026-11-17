
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct queue
{
    int front, rear;
    int data[SIZE];
};

typedef struct queue Queue;

void enqueue(Queue *q, int item)
{
    if (q->rear == SIZE - 1)
        printf("\nQueue full");
    else
    {
        q->rear = q->rear + 1;
        q->data[q->rear] = item;

        if (q->front == -1)
            q->front = 0;
    }
}

void dequeue(Queue *q)
{
    if (q->front == -1)
        printf("\nQueue empty");
    else
    {
        printf("\nElement deleted is %d",
               q->data[q->front]);

        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
            q->front = q->front + 1;
    }
}

void display(Queue q)
{
    int i;

    if (q.front == -1)
        printf("\nThe queue is empty");
    else
    {
        printf("\nThe content of queue:");

        for (i = q.front; i <= q.rear; i++)
            printf("%d\t", q.data[i]);
    }
}

int main()
{
    Queue q;
    q.front = -1;
    q.rear = -1;

    int item, ch;

    for (;;)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nRead choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nRead element to be inserted:");
                scanf("%d", &item);
                enqueue(&q, item);
                break;

            case 2:
                dequeue(&q);
                break;

            case 3:
                display(q);
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}
