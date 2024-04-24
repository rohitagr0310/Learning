#include <stdio.h>

int main()
{
    int n = 20;

    char a[n][n];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i < j)
            {
                a[i][j] = '\0';
            }
            else
            {
                a[i][j] = '*';
            }
        }
    }

    for (int k = 0; k < 512; k++)
    {

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}