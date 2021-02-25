#include <stdio.h>

void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];

    int start, end;

    start = lb;

    end = ub;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }

        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }

    swap(&a[lb], &a[end]);

    return end;
}

void quick_sort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(A, lb, ub);

        quick_sort(A, lb, loc - 1);

        quick_sort(A, loc + 1, ub);
    }
}

int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    quick_sort(a, 0, 7);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}