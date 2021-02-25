#include <stdio.h>
void insertion_sort(int a[], int n)
{
    int temp, j;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];

        j = i - 1;

        while (j >= 0 & a[j] > temp)
        {
            a[j + 1] = a[j];

            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 30, 65};

    insertion_sort(a, 8);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
    
}
