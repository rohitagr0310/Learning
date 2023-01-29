#include <stdio.h>

int main()
{
    int sum = 0, n = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number - ");
        scanf("%d", &n);

        if (n > 0)
        {
            sum = sum + n;
            continue;
        }
        else
        {
            break;
        }
    }

    printf("The sum of entered number is %d", sum);

    return 0;
}