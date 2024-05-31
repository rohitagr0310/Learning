#include <stdio.h>

int coprime(int n1, int n2)
{
    int min, co_prime = 1;

    if (n1 > n2)
    {
        min = n2;
    }

    else
    {
        min = n1;
    }

    for (int i = 2; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            co_prime = 0;
            break;
        }
    }

    return (co_prime);
}

int main()
{
    int n1, n2;

    printf("Enter 2 positive numbers (space seprated) - ");
    scanf("%d %d", &n1, &n2);

    if (coprime(n1, n2) == 1)
    {
        printf("%d and %d are co-prime numbers.\n", n1, n2);
    }
    else
    {
        printf("%d and %d are not co-prime numbers.\n", n1, n2);
    }

    return 0;
}