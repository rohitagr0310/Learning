#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n], fr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the position %d - ", i + 1);
        scanf("%d", &a[i]);

        fr[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count++;
                fr[j] = 0;
            }
        }
        if (fr[i] != 0)
        {
            fr[i] = count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (fr[i] != 0)
        {
            printf("The number %d is present %d times\n", a[i], fr[i]);
            continue;
        }
    }

    return 0;
}