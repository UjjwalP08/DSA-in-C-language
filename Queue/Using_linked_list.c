//**********************Queue Implementation Using Linked List*********************************
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
    // int c = 1;

    
        new = (node *)malloc(sizeof(node));

        printf("Enter value which you want to insert in Queue (%p)\n", &new->data);
        scanf("%d", &new->data);
        new->next = NULL;

        if (front == NULL && rear == NULL)
        {
            front = rear = new;
        }
        else
        {
            rear->next = new;
            rear = new;
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

    else
    {
        printf("Deleted data %d  (%p)\n", temp->data, &temp->data);

        front = front->next;

        free(temp);
    }
}

//**********************Display Operation*********************************
void display()
{
    node *temp;
    temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("\t \t \t Queue is Empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Data is %d (%p)\n", temp->data, &temp->data);

            temp = temp->next;
        }
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
        printf("Peek value is %d \n", front->data);
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