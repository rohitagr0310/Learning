#include <stdio.h>

int main ()
{
    int a;

    printf("Enter your number to check if imput is negative or positive - ");
    scanf("%d",a);
    printf("\n\n");

    if (a>0 )
    {
        printf("The imput is Positive");
    }
    else
    {
        printf("The imput is Negative");
    }
    
    return 0;
}