#include<stdio.h>

int binary_search(int a[],int n,int data) // n is the size of the array
{
int l,r;

l=0;
r=n-1;
while (l<r)
{
    int mid=(l+r)/2;

    if(data == a[mid])
    {
        return mid;
    }

    else if (data < a[mid])
    {
        r=mid-1;

        return r;
    }
    else
    {
        l = mid+1;

        return l;
    }
    
    
}

return -1;

}
int main()
{
    int l,r,data;

    int a[8]={1,2,3,4,5,6,7,8};


    printf("Enter data which you want to find in array\n");
    scanf("%d",&data);

    l=binary_search(a,8,data);

    if (l == -1)
    {
        printf("Your data is not inside the array\n");

    }
    else
    {
        printf("Your %d data is present at %d index",data,l);
    }
    
    return 0;
}
