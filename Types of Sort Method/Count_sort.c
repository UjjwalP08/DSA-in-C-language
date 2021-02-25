#include <stdio.h>
// {Problem in the code}
void count_sort(int a[], int n, int k)
{
    int count[k + 1];

    int b[n];

    for (int i = 0; i < n; i++)
    {

        ++count[a[i]];
    }

    for (int i = 0; i < k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[a[i]]] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 34, 65};

    count_sort(a, 8, 87);

    // printf("Sorted Array is \n");

    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d\t", a[i]);
    // }

    return 0;
}
