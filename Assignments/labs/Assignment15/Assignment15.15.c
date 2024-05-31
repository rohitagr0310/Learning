#include <stdio.h>
int prime_checker(int n);

int prime_checker(int n)
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
    int n;
    printf("Enter a number till you want to print prime numbers - ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (prime_checker(i) == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}