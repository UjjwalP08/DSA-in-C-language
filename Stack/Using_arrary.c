
//**********************Stack Implementation Using Array*********************************
#include <stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;

//*****************************Push Operation******************************
void push()
{   
    int x;
    printf("Enter the value:-");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("\t \t \t Stack is Overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
    
    
}
//*****************************POP Operation******************************
void pop()
{
    int y;
    printf("\n \t \t Pop Operation Now Perfoming\n");
    if(top==-1)
    {
        printf("\t \t \t Underflow is Happen");
    }

    else
    {
        y=stack[top];
        top--;
        printf("Deleted item is %d\n",y);
    }
    
    printf("\n \t \t POP Operation is now completed\n");
}

//*****************************Peek Operation******************************

void Peek()
{
    int y;
    
    if(top == 1)
    {
        printf("List is Empty");
    }
    
else
{
    y=stack[top];
    printf("\t \t \t Hightest Element value of Stack is %d \n",y);
}
}

//*****************************Display Operation******************************
void display()
{
    int i;
    
    
    printf("\t \t Diplaying Your Data!!!!!\n");
    
    for(i=top;i>=0;i--)
    {
        printf("Your data is %d \n",stack[i]);
    }
}
int main()
{
    // push();
    // push();
    // push();
    // push();
    // push();
    // push();
    // printf("\n");
    // display();
    // printf("\n");
    // pop();
    // printf("\n");
    // display();
    // printf("\n");
    // pop();
    // printf("\n");
    // display();
    

       int d;
    
    do
    {
        printf("\n1 for Push the Element inside the stack\n2 for POP out the Element\n3 for peek Element\n4 for Diplaying Elements\n0 for exit\n");
        scanf("%d",&d);
        
        switch(d)
        {
            case 0:
            printf("Exit for Stack\n");
            break;
            case 1:
            push();
            printf("\t \t Push Operation is now completed\n");
            break;
            case 2:
            pop();
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
       
    }while (d != 0);
    
    return 0;
    
}
