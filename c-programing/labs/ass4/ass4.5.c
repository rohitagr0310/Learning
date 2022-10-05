#include <stdio.h>

int main()
{
    float basic,da=40,gross;

    printf("Enter Ramesh's basic salary - ");
    scanf("%f",&basic);
    printf("\n\n");
    
    gross = ((da/100)*basic) + basic;

    printf("The Gross Salary of Ramash is - %f", gross);
    
    return 0;
}