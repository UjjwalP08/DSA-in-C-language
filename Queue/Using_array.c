//**********************Queue Implementation Using Array*********************************
#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1, rear = -1;

//**********************Enqueue Operation*********************************
void enqueue()
{
    int x;
    printf("Enter value which you want to insert in Queue\n");
    scanf("%d", &x);

    if (rear == N - 1)
    {
        printf("\t \t \t Queue is Full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;

        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

//**********************Dequeue Operation*********************************
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\t \t \t Queue is Empty \n");
    }
    else if (front == rear)
    {
        printf("Deleted data %d \n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted data %d \n", queue[front]);

        front++;
    }
}

//**********************Display Operation*********************************
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\t \t \t Queue is Empty");
    }
    else
    {
        printf("\t \t Your data is\n\n");
        for (int i = front; i < rear + 1; i++)
        {
            printf(" %d \t", queue[i]);
        }
    }
}

//**********************Peek Operation*********************************

void Peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        printf("Peek value is %d \n", queue[front]);
    }
}

int main()
{

    int d;

    do
    {
        printf("\n1 for Enqueue Operation in Queue\n2 for Dequeue Operation in Queue\n3 for Peek Operation in Queue\n4 for Diplaying Operation in Queue\n0 for exit\n");
        scanf("%d", &d);

        switch (d)
        {
        case 0:
            printf("\t \t \t Exit for Queue\n");
            break;
        case 1:
            enqueue();
            printf("\t \t Enqueue Operation is now completed\n");
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("\t \t \t Wrong Choice!!!!!!!!!\n");
        }

    } while (d != 0);

    return 0;
}