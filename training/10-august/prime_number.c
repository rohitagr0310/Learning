#include <stdio.h>
int prime_number(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int sum = 0;
    int n;

    printf("The number till = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (prime_number(i))
        {
            sum = sum + i;
        }
    }

    printf("the sum of prime number till %d is %d", n, sum);

    return 0;
}