#include <stdio.h>

int main()
{
    int n, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number - ");
        scanf("%d", &n);

        if (n > 0)
        {
            sum = sum + n;
        }
        else
        {
            break;
        }
    }

    printf("Sum is :%d", sum);

    return 0;
}