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

    insertion_sort(a, n);

    printf("Sorted Array is \n");
    

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
