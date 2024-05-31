#include <stdio.h>
int sorter(int a[], int n)
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

int main()
{
    int n, k;

    printf("Enter size of the array - ");
    scanf("%d", &n);

    int a[n], b[n], ans[n + n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d of the first array - ", i + 1);
        scanf("%d", &a[i]);

        ans[i] = a[i];
    }
    printf("\n");

    k = n;

    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d of the second array - ", i + 1);
        scanf("%d", &b[i]);

        ans[k] = b[i];
        k++;
    }

    printf("\nThe merged array is - ");

    sorter(ans, k);

    printf("\n");

    return 0;
}