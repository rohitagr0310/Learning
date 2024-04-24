#include <stdio.h>
int armstrong(int n);

int armstrong(int n)
{
    int r, sum = 0;

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
    int n, ans;

    printf("Enter the number to check wether it is armstrong number or not - ");
    scanf("%d", &n);

    ans = armstrong(n);

    if (n == ans)
    {
        printf("armstrong  number ");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}