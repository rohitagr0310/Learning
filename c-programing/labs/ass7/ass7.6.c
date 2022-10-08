#include <stdio.h>

int main ()
{
    int a;

    printf("Enter your number to check if imput is odd or even - ");
    scanf("%d",a);
    printf("\n\n");

    if (a % 2 == 0)
    {
        printf("The imput is even\n");
    }
    else
    {
        printf("The imput is odd\n");
    }
    
    return 0;
}