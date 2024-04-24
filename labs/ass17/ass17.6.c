#include <stdio.h>
int prime(int n);

int prime(int n)
{
    int p = 1;

    if (n == 2 || n == 3)
    {
        return p;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 0;
            break;
        }
        else
        {
            p = 1;
        }
    }

    return p;
}

int main()
{
    int n, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number - ");
        scanf("%d", &n);

        if (prime(n) == 0)
        {
            sum = sum + n;
        }
        else
        {
            continue;
        }
    }

    printf("Sum is :%d", sum);

    return 0;
}