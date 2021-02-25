//**********************Double Ended Queue Implementation Using Circular Array***************************************


// Problem in this code

#include <stdio.h>
#define n 5
int deque[n];
int f = -1, r = -1;

//**********************Insertion At the Front***************************************
void enque_front()
{
    int x;
    printf("Enter value which you want to insert in Queue\n");
    scanf("%d", &x);

    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("Queue is Full\n");
    }

    else if (f == 0)
    {
        f = n - 1;

        deque[f] = x;
    }

    else
    {
        f--;
        deque[f] = x;
    }
}
//**********************Insertion At the Rear***************************************
void enque_rear()
{
    // int x;
    // printf("Enter value which you want to insert in Queue\n");
    // scanf("%d", &x);

    // if ((f == 0 && r == n - 1) || (f == r + 1))
    // {
    //     printf("Queue is Full\n");
    // }

    // else if (f == -1 && r == -1)
    // {
    //     f = r = 0;

    //     deque[r] = x;
    // }

    // else if (r = n - 1)
    // {
    //     r = 0;

    //     deque[r] = x;
    // }
    // else
    // {
    //     r=(r+1)%n;
    //     deque[r] = x;
    // }
    int x;
    printf("Enter value which you want to insert in Queue\n");
    scanf("%d", &x);

    
    if (f == -1 && r == -1)
    {
        f = r = 0;

        deque[f] = x;
    }
    else if (((r + 1) % n ) == f)
    {
        printf("\t \t \t Queue is Full\n");
    }
    else if (r = n - 1)
    {
        r = 0;

        deque[r] = x;
    }
    else
    {
        r = (r + 1)%n;
        deque[r] = x;
    }
}
//**********************Display Data***************************************

void display()
{
    int i = f;

    printf("\t \t \t Displaying Data!!!!!!!!!!!!!\n");

    if (f == -1 && r == -1)
    {
        printf("\t \t \t Queue is Empty");
    }
    while (i != r)
    {
        printf("Data is %d\n", deque[i]);

        i = (i + 1) % n;
    }
    printf("Data is %d\n", deque[r]);
}
//**********************Deletion at Front***************************************
void deque_front()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty \n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (f = n - 1)
    {
        printf("Deleted data is %d \n", deque[f]);

        f = 0;
    }
    else
    {
        printf("Deleted data is %d \n", deque[f]);

        // f++;
        f=(f+1) % n;

    }
}
//**********************Deletion at Rear***************************************
void deque_rear()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty \n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (r == 0)
    {
        printf("Deleted data is %d \n", deque[r]);

        r = n - 1;
    }
    else
    {
        printf("Deleted data is %d \n", deque[r]);

        r--;
    }
}
//**********************Get the Front Value***************************************
void get_front()
{
    printf("The get the front value is %d \n", deque[f]);
}
//**********************Get the Rear Value***************************************
void get_rear()
{
    printf("The get rear value is %d \n", deque[r]);
}

int main()
{

    int d;

    do
    {
        printf("\n1 for Enqueue Operation at front\n2 for Enqueue Operation at rear\n3 for Dequeue Operation at front\n4 for for Dequeue Operation at rear\n5 for Diplaying Operation \n6 for get the value from front\n7 for get the value from back\n0 for exit\n");
        scanf("%d", &d);

        switch (d)
        {
        case 0:
            printf("\t \t \t Exit for Queue\n");
            break;
        case 1:
            enque_front();
            printf("\t \t Enqueue Operation at front is completed\n");
            break;
        case 2:
            enque_rear();
            printf("\t \t Enqueue Operation at rear is completed\n");

            break;
        case 3:
            deque_front();
            printf("\t \t Dequeue Operation at front is completed\n");

            break;
        case 4:
            deque_rear();
            printf("\t \t Dequeue Operation at rear is completed\n");
            break;
        case 5:
            display();
            break;
        case 6:
            get_front();
            break;
        case 7:
            get_rear();
            break;
        default:
            printf("\t \t \t Wrong Choice!!!!!!!!!\n");
        }

    } while (d != 0);

    return 0;
}