#include <stdio.h>
void sort_asscending(int a[], int n)
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
}

void sort_descending(int a[], int n)
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
}

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n], choice;

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("How do you wish to sort it\n");
    printf("Enter 1 for ascending and 2 for descending - ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sort_asscending(a, n);
        break;

    case 2:
        sort_descending(a, n);
        break;

    default:
        printf("Invalid Choice!!!\n\n");
        break;
    }

    printf("after sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}