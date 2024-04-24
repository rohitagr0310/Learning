#include <stdio.h>

int main()
{
    int a[512][512];

    for (int i = 0; i < 512; i++)
    {
        for (int j = 0; j < 512; j++)
        {
            printf("for i = %d and for j = %d it has value %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
