#include <stdio.h>

int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                goto found;
            }
        }
    }
found:
    printf("element");

    return 0;
}