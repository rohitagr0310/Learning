#include <stdio.h>

int main()
{
    struct birthday
    {
        int day;
        int month;
        int year;
    } s[20];

    for (int i = 0; i < 20; i++)
    {
        printf("For person - %d\n", i + 1);
        printf("Enter day - ");
        scanf("%d", &s[i].day);

        printf("Enter Month - ");
        scanf("%d", &s[i].month);

        printf("Enter Year - ");
        scanf("%d", &s[i].year);
        printf("\n");
    }

    printf("\n\nS.no | Day | Month | Year\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d | %d | %d | %d \n", i + 1, s[i].day, s[i].month, s[i].year);
    }

    return 0;
}