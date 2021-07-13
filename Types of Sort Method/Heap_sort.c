#include <stdio.h>
void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
void heap_sort(int a[], int n)
{
    int i;

    for (i = n / 2 - 1; i >= 0; i--)
    {
        max_heapify(a, n, i);
    }

    for (i = n-1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);

        max_heapify(a, i, 0);
    }
}
int max_heapify(int a[], int n, int i)
{
    int largest = i;

    int left_child = (2 * i) + 1;

    int right_child = (2 * i) + 2;

    while ((left_child < n) && (a[left_child] > a[largest]))
    {
        largest = left_child;
    }

    while ((right_child < n) && (a[right_child] > a[largest]))
    {
        largest = right_child;
    }

    if (largest != i)
    {
        swap(&a[largest], &a[i]);

        max_heapify(a, n, largest);
    }
    
}



int main()
{

    // int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    // heap_sort(a, 8);

    // printf("Sorted Array is \n");

    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d\t", a[i]);
    // }

    int n;

    printf("Enter value which you want to crete an array:");
    scanf("%d", &n);
    printf("\n");

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array:", i);
        scanf("%d", &a[i]);
    }
    heap_sort(a, n);

    printf("Sorted Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}