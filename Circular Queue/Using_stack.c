//**********************Circular Queue Implementation Using Stack*********************************

#include<stdio.h>
#define n 5
int s1[n],s2[n];
int top1 = -1,top2 = -1;
int count = 0;
void push1(int x)
{
    if(top1 == n-1)
    {
        printf("\t \t \t Queue is Full \n");
    }
    else
    {
        top1++;

        s1[top1] = x;
    }   
}
void push2(int k)
{
    if(top2 == n-1)
    {
        printf("\t \t \t Queue is Empty \n");
    }
    else
    {
        top2++;

        s2[top2] = k;
    }   
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}

//**********************Enqueue Operation*********************************

void enqueue()
{
    int x;
    printf("Enter the value which you want to insert in Queue\n");
    scanf("%d",&x);

    push1(x);

    count++;
}

//**********************Dequeue Operation*********************************

void dequeue()
{
    int i,a,b;
    
    if(top1 ==-1 && top2 == -1)
    {
        printf("\t \t \t Queue is Empty\n");
    }

    else
    {
        for (int i = 0; i < count; i++)
        {
            a=pop1();

            push2(a);
        }
        
        
        b = pop2();
        
        printf("Deleted Element is %d \n",b);

        for (int i = 0; i < count; i++)
        {
            a = pop2();

            push1(a);
        }
        
        
    }
    
}
//**********************Display Operation*********************************

void display()
{
    printf("\t \t \tDisplaying Data!!!!!!!!!!!!!!\n");
    
    
    if(top1 ==-1 && top2 == -1)
    {
        printf("\t \t \t Queue is Empty\n");
    }

    else
    {

        for (int i = 0; i <= top1; i++)
        {
            printf("The data of Circular Queue is %d \n",s1[i]);
        }
    }
    
}

int main()
{
    int d;

    do
    {
        printf("\n1 for Enqueue Operation in Queue\n2 for Dequeue Operation in Queue\n3 for Diplaying Operation in Queue\n0 for exit\n");
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
            display();
            break;
        default:
            printf("\t \t \t Wrong Choice!!!!!!!!!\n");
        }

    } while (d != 0);

    return 0;
}
