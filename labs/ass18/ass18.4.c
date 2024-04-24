#include <stdio.h>

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number for position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    int move = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                move = a[i];
                a[i] = a[j];
                a[j] = move;
            }
        }
    }

    printf("The largest value is %d\n", a[0]);

    return 0;
}