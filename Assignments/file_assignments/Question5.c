#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of the month - ");
    scanf("%d", &n);

    switch (n)
    {
    case 1, 3, 5, 7, 8, 10, 12:
        printf("The number of the days is 31");
        break;

    case 2:
        printf("The number of days is 28");
        break;

    case 4, 6, 9, 11:
        printf("The numbers of days is 30");
        break;

    default:
        printf("Invalid number of the month");
        break;
    }

    return 0;
}