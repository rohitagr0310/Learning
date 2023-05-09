#include <stdio.h>

int main()
{
    int input, days, weeks, year;

    printf("Enter the number of days - ");
    scanf("%d", &input);

    year = input / 365;

    if (year > 0)
    {
        input = input - (365 * year);
    }

    weeks = input / 7;

    if (weeks > 0)
    {
        input = input - (7 * weeks);
    }

    days = input;

    printf("The output is %d days %d weeks %d year", days, weeks, year);

    return 0;
}