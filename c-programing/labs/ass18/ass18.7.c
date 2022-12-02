#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number for position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

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

    printf("\nThe Second largest value is %d\n\n", a[1]);

    return 0;
}