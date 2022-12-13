#include <stdio.h>

int main()
{

    int n[10], s = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);

        s = n[i];

        if (s > n[i])
        {
            printf("%d", s);
        }

        else
        {
            printf("%d", n[i]);
        }
    }

    return 0;
}