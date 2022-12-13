#include <stdio.h>
void sort(int a[], int n)
{
    printf("Before fun-Sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

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

    printf("after fun-sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number for position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Before Main-sorting = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    int move = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                move = a[i];
                a[i] = a[j];
                a[j] = move;
            }
        }
    }

    printf("after Main-sorting = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}