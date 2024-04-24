#include <stdio.h>
int greatest_number(int a[], int n);

int greatest_number(int a[], int n)
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

    return a[n - 1];
}

int main()
{
    int n, ans;
    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    ans = greatest_number(a, n);

    printf("The largest number in the array is - %d\n", ans);

    return 0;
}