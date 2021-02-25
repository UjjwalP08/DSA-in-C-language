//**********************Stack Implementation Using Linked List*********************************
#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
} node;

node *top = NULL;

//**********************Push Operation*********************************
void push()
{
node *new;
    int x;
    

    new = (node *)malloc(sizeof(node));

    printf("Enter data you want to push (%p):-", &x);
    scanf("%d", &x);
    
    new->data = x;

    new->next = top;

    top = new;
    
}

//**********************Pop Operation*********************************
void pop()
{
    node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is an Empty\n");
    }
    else
    {
        printf("Deleted element is %d (%p) \n", temp->data, &temp->data);

        top = top->next;

        free(temp);
    }
}

//**********************Display Operation*********************************
void display()
{
	node *temp;
	temp = top;
    if (temp == NULL)
    {
        printf("Stack is an Empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Your data is %d (%p)\n", temp->data, &temp->data);

            temp = temp->next;
        }
    }
}
//**********************Peek Operation*********************************

void Peek()
{
    if (top == NULL)
    {
        printf("Stack is an Empty\n");
    }

    else
    {
        printf("Top Element is %d \n", top->data);
    }
}
int main()
{
    int c;
    do
    {
        printf("1 for Push\n2 for Pop\n3 for Display\n4 for Peek\n0 for Exit\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            Peek();
            break;
        case 0:
            printf("Exit Stack\n");
            break;
        default:
            printf("Invalid Choice");
            break;
        }

    } while (c != 0);

    return 0;
}