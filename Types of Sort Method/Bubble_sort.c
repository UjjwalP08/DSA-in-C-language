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

    // int a[8] = {1, 6, 75, 34, 87, 45, 34, 65};
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

    bubble_sort(a, n);

    printf("Your Bubble Sorted Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    printf("\n");
    printf("Your Bubble Sorted array Time complexity is O(%d)",n*n);

    return 0;
}
