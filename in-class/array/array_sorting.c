#include <stdio.h>

int main()
{
    int a[] = {8, 4, 6, 5, 2, 3, 1, 7, 9, 10};
    int move = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (a[i] < a[j])
            {
                move = a[i];
                a[i] = a[j];
                a[j] = move;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}