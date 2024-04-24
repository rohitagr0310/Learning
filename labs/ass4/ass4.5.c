#include <stdio.h>

int main()
{
    float basic,da=40,gross;

    printf("Enter Ramesh's basic salary - ");
    scanf("%0.2f",&basic);
    printf("\n\n");
    
    gross = ((da/100)*basic) + basic;

    printf("The Gross Salary of Ramash is - %0.2f", gross);
    
    return 0;
}