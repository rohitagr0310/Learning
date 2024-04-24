#include <stdio.h>

int main()
{
    for (int i = 20; i >= 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}