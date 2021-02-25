#include <stdio.h>
void bubble_sort(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int a[8] = {1, 6, 75, 34, 87, 45, 34, 65};

    bubble_sort(a, 8);

    printf("Sorted Array is \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
