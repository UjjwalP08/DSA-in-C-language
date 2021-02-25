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

    int a[8] = {1, 6, 75, 3, 87, 45, 34, 605};

    selection_sort(a, 8);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}