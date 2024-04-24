#include <stdio.h>

int main()
{
    int n;

    printf("Enter the year - ");
    scanf("%d", &n);

    if (n % 4 == 0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }

    return 0;
}