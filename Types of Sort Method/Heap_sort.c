#include <stdio.h>
void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void max_heapify(int a[], int n, int i)
{
    int largest = i;

    int left_child = (2 * i);

    int right_child = (2 * i) + 1;

    while ((left_child <= n) && (a[left_child] > a[largest]))
    {
        largest = left_child;
    }

    while ((right_child <= n) && (a[right_child] > a[largest]))
    {
        largest = right_child;
    }

    if (largest != i)
    {
        swap(&a[largest], &a[i]);

        max_heapify(a, n, largest);
    }
}

void heap_sort(int a[], int n)
{
    int i;

    for (i = n / 2; i >= 1; i--)
    {
        max_heapify(a, n, i);
    }

    for (i = n; i >= 1; i--)
    {
        swap(&a[1], &a[i]);

        max_heapify(a, n, 1);
    }
}

int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    heap_sort(a, 8);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}