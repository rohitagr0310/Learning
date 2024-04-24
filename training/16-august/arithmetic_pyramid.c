#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", j % 10);
        }
        printf("\n");
    }

    return 0;
}