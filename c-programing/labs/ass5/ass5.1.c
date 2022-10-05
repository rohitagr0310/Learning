#include <stdio.h>

int main()
{
    float basic,da=50,hr=20,gross;

    printf("Enter Aman's basic salary - ");
    scanf("%f",&basic);
    printf("\n\n");
    
    gross = ((da/100)*basic) + ((hr/100)*basic) + basic;

    printf("The Gross Salary of Aman is - %f", gross);
    
    return 0;
}