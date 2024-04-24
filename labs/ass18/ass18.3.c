#include <stdio.h>

int main()
{
    int a[10], sum_even = 0, sum_odd = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d number - ", i + 1);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            printf("Enter number is even \n");
            sum_even = sum_even + a[i];
        }
        else
        {
            printf("Enter number is odd \n");
            sum_odd = sum_odd + a[i];
        }
    }

    printf("The sum of all EVEN entered numbers is %d", sum_even);

    printf("The sum of all ODD entered numbers is %d", sum_odd);

    return 0;
}