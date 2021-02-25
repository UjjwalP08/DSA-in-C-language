//**********************Circular Queue Implementation Using Linked List*********************************
#include <stdio.h>
#include <stdlib.h>
typedef struct link
{
    int data;
    struct link *next;
} node;

node *front = NULL;

node *rear = NULL;

//**********************Enqueue Operation*********************************
void enqueue()
{
    node *new;
    int c = 1;

    while (c != 0)
    {

        new = (node *)malloc(sizeof(node));

        printf("Enter value which you want to insert in Queue (%p)\n", &new->data);
        scanf("%d", &new->data);
        new->next = NULL;

        if (rear == NULL)
        {
            front = rear = new;

            rear->next = new;
        }
        else
        {
            rear->next = new;
            rear = new;
            rear->next = front;
        }

        printf("For continue enter 1 or for exit enter 0\n");
        scanf("%d", &c);
    }
}

//**********************Dequeue Operation*********************************
void dequeue()
{
    node *temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("\t \t \t Queue is Empty \n");
    }

    else if (front == rear)
    {
        front = rear = NULL;

        free(temp);
    }
    else
    {
        printf("Deleted data %d  (%p)\n", temp->data, &temp->data);

        front = front->next;

        rear->next = front;

        free(temp);
    }
}

//**********************Display Operation*********************************
void display()
{
    node *temp;
    temp = front;

    printf("\t \t \t Displaying Data!!!!!!!\n");

    if (front == NULL && rear == NULL)
    {
        printf("\t \t \t Queue is Empty");
    }
    else
    {
        while (temp->next != front)
        {
            printf("Data is %d (%p)\n", temp->data, &temp->data);

            temp = temp->next;
        }

        printf("Data is %d (%p)\n", temp->data, &temp->data);
    }
}

//**********************Peek Operation*********************************

void Peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("\t \t \t Queue is Empty \n");
    }
    else
    {
        printf("Peek value is %d (%p) \n", front->data, &front->data);
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
            printf("\t \t Enqueue Operation is completed\n");
            break;
        case 2:
            dequeue();
            printf("\n \t \t \t Dequeue Operation is completed\n");

            break;
        case 3:
            Peek();
            printf("\n \t \t \t Peek Operation is completed\n");
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