#include <stdio.h>
int armstrong(int n);

int armstrong(int n)
{
    int r, sum;

    while (n > 0)
    {
        r = n % 10;

        sum = sum + (r * r * r);

        n = n / 10;
    }

    return sum;
}

int main()
{
    int ans;

    for (int i = 0; i < 100; i++)
    {
        ans = armstrong(i);

        if (i == ans)
        {
            printf("%d ", i);
        }
    }

    return 0;
}