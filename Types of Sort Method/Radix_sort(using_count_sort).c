#include <stdio.h>

// Problem

int getmax(int a[], int n)
{

    int i;

    int max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int value(int a[], int n)
{
    int j = 0, k;

    for (int i = 0; i < n; i++)
    {
        k = a[i] % 10;

        if (k >= j)
        {
            j = k;
        }
    }

    return j;
}
void count_sort(int a[], int n, int pos)
{
    int k;

    int b[n];

    k = value(a, n);

    int count[k + 1];

    for (int i = 0; i < n; i++)
    {
        ++count[(a[i] / pos) % 10];
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[(a[i] / pos) % 10]];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

void radix_sort(int a[], int n)
{
    int max = getmax(a, n);

    for (int pos = 1; 0 < max / pos; pos = pos * 10)

    {

        count_sort(a, n, pos);
    }
}

int main()
{

    int a[8] = {1, 6, 7, 4, 8, 5, 3, 5};

    radix_sort_sort(a, 8);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}