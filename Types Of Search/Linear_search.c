#include<stdio.h>

int main()
{
    int data,fo=0;

    int a[8]={1,6,75,34,87,45,34,65};

    printf("Enter Data which you want to find to help with Linear Search\n");
    scanf("%d",&data);

    for (int i = 0; i < 8; i++)
    {
        if (a[i] == data)
        {
            printf("Your %d data is %d index\n",data,i);

            fo++;

            break;
        }
        
    }

    if (fo == 0)    
    {
        printf("Data is not inside the array\n");
    }
        
    return 0;
}
