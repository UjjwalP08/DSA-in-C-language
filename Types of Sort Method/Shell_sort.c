#include <stdio.h>
void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
void shell_sort(int a[], int n)
{
    int gap;

    for (gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {

            for (int i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] >= a[i])
                {
                    break;
                }
                else
                {

                    swap(&a[i + gap], &a[i]);
                }
            }
        }
    }
}

int main()
{

    // int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    int n;

    printf("Enter Your size array:- ");
    scanf("%d", &n);
    printf("\n");

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array:", i);
        scanf("%d", &a[i]);
    }

    shell_sort(a, n);

    printf("Sorted Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}