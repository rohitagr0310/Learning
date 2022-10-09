#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year number - ");
    scanf("%d",&a);

    if (a%4==0)
    {
        printf("The year %d is a leap year",a);    
    }
    else
    {
        printf("The year %d is NOT a leap year",a);    
    }
    
    return 0;
}