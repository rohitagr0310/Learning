#include <stdio.h>
int hcf(int a, int b);

int hcf(int a, int b)
{
    int hcf = 1;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf=i;
        }
    }

    return hcf;
}

int main()
{
    int a, b, ans;

    printf("to calculate its HCF Enter two numbers\n\n");
    printf("Enter first numbers - ");
    scanf("%d", &a);

    printf("Enter second numbers - ");
    scanf("%d", &b);

    ans = hcf(a, b);

    printf("%d \n\n", ans);

    return 0;
}