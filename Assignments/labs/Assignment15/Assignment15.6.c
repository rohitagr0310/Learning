#include <stdio.h>
int fact(int a);

int fact(int a)
{
    long int fact = 1;

    if (a == 0)
    {
        return 1;
    }

    for (int i = 1; i <= a; i++)
    {
        fact = (fact * i);
    }

    return fact;
}
int main()
{
    long int a, ans;

    printf("Enter the number you wish to know factorial of - ");
    scanf("%ld", &a);

    ans = fact(a);

    printf("%ld", ans);

    return 0;
}