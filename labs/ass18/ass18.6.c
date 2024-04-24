#include <stdio.h>

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number for position %d - ", i);
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

    printf("The sorted array is \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}