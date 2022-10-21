#include <stdio.h>

int main()
{
    int m;
    printf("enter the month number - ");
    scanf("%d", &m);

    switch (m)
    {
    case 1 || 3 || 5 || 7 || 8 || 10 || 12:
    {
        printf("Number of days are 31");
        break;
    }
    case 2:
    {
        printf("Number of days are 28");
        break;
    }
    case 4 || 6 || 9 || 11:
    {
        printf("Number of days are 30");
        break;
    }
    default:
        printf("Wrong imput");
        break;
    }

    return 0;
}