#include <stdio.h>

int main()
{
    struct birthday
    {
        int day;
        int month;
        int year;
    } s1, s2, s3, s4, s5;

    printf("Enter first birthday (dd mm yyyy) - ");
    scanf("%d %d %d", &s1.day, &s1.month, &s1.year);

    printf("Enter second birthday (dd mm yyyy) - ");
    scanf("%d %d %d", &s2.day, &s2.month, &s2.year);

    printf("Enter third birthday (dd mm yyyy) - ");
    scanf("%d %d %d", &s3.day, &s3.month, &s3.year);

    printf("Enter forth birthday (dd mm yyyy) - ");
    scanf("%d %d %d", &s4.day, &s4.month, &s4.year);

    printf("Enter fifth birthday (dd mm yyyy) - ");
    scanf("%d %d %d", &s5.day, &s5.month, &s5.year);

    printf("Day | Month | Year");
    printf("%d | %d | %d \n", s1.day, s1.month, s1.year);
    printf("%d | %d | %d \n", s2.day, s2.month, s2.year);
    printf("%d | %d | %d \n", s3.day, s3.month, s3.year);
    printf("%d | %d | %d \n", s4.day, s4.month, s4.year);
    printf("%d | %d | %d \n", s5.day, s5.month, s5.year);
    return 0;
}