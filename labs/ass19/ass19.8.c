#include <stdio.h>

int ua(int a[], int n)
{
    int u[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count++;
            }

            if (count = 0)
            {
                u[i] = a[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (u[i] != 0)
        {
            printf("%d ", u[i]);
        }
    }
}

int main()
{
    int n, ans;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for a[%d] - ", i);
        scanf("%d", &a[i]);
    }

    ua(a, n);

    return 0;
}