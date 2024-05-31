#include <stdio.h>
void array_sorter_descending(int a[], int n);
void array_sorter_ascending(int a[], int n);

void array_sorter_ascending(int a[], int n)
{
    int move = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                move = a[i];
                a[i] = a[j];
                a[j] = move;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void array_sorter_descending(int a[], int n)
{
    int move = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                move = a[i];
                a[i] = a[j];
                a[j] = move;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n, o;

    printf("Enter your array size - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Do you want to sort in ascending or descending order \n");
    printf("Enter 1 of ascending and 2 for descending - ");
    scanf("%d", &o);

    printf("The sorted array - ");
    switch (o)
    {
    case 1:
        array_sorter_descending(a, n);
        break;

    case 2:
        array_sorter_ascending(a, n);
        break;
    }

    printf("\n\n");

    return 0;
}