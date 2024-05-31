#include <stdio.h>
int digit(int n);

int digit(int n)
{
    int digit_number = 0;

    for (int i = 0; i <= n; i++)
    {
        n = n / 10;
        digit_number++;
    }

    return digit_number;
}
int main()
{
    int n, ans;

    printf("Enter a number to know how many digit are in it - ");
    scanf("%d", &n);

    ans = digit(n);

    printf("the number of digit in the number is %d", ans);

    return 0;
}