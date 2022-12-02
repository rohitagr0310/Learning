#include <stdio.h>
int ad(int a[], int n);

int ad(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count++;
            }
        }
    }

    return count;
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

    ans = ad(a, n);

    printf("total number of duplicate elements in an array is - %d\n", ans);

    return 0;
}