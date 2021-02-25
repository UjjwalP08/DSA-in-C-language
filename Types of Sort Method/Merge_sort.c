
// Problem in this code

#include <stdio.h>
void merge(int a[], int lb, int mid, int ub)
{
    int i, j, k;

    i = lb;
    j = mid + 1;
    k = lb;

    int b[50];


    

    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];

            i++;
        }

        else
        {
            b[k] = a[j];

            j++;
        }

        k++;
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];

            j++;

            k++;
        }
    }

    else
    {
        while (i <= mid)
        {
            b[k] = a[j];

            i++;

            k++;
        }
    }

    for (int k = lb; k <= ub; k++)
    {
        a[k] = b[k];
    }


}

void merge_sort(int a[], int lb, int ub)
{
    int mid;

    if (lb < ub)
    {
        mid = lb + ((lb + ub) / 2);

        merge_sort(a, lb, mid);

        merge_sort(a, mid + 1, ub);

        merge(a, lb, mid, ub);
    }
}
int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    
    merge_sort(a, 0, 7);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
