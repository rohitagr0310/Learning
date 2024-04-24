#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number of element A(%d,%d) - ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number of element B(%d,%d) - ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("%d %d %d\n", c[0][0], c[0][1], c[0][2]);
    printf("%d %d %d\n", c[1][0], c[1][1], c[1][2]);
    printf("%d %d %d", c[2][0], c[2][1], c[2][2]);

    return 0;
}
