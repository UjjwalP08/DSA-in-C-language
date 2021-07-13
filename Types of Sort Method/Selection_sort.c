#include <stdio.h>
void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
void selection_sort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }
}
int main()
{

    int n;

    printf("Enter value which you want to crete an array:");
    scanf("%d", &n);
    printf("\n");

    int a[n];

    // int a[8] = {1, 6, 75, 3, 87, 45, 34, 605};

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array:", i);
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);

    printf("Sorted Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    printf("\n");
    printf("Time complxity of given an array is O(%d)", n * n);
    return 0;
}