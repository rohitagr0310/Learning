#include <stdio.h>

int main()
{
    int n;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number - ");
        scanf("%d", &n);

        if (n == 10)
        {
            continue;
        }
        else
        {
            printf("Enter number is %d", n);
        }
    }

    return 0;
}