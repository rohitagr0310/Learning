#include <stdio.h>
int ad(int a[], int n);

int ad(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                printf("The first occurrence of adjacent duplicate happens at a[%d] and a[%d]\n", i, j);
                break;
            }
        }
        break;
    }
}

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for a[%d] - ", i);
        scanf("%d", &a[i]);
    }

    ad(a, n);

    return 0;
}