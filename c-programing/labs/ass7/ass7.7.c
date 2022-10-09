#include <stdio.h>

int main ()
{
    int a;

    printf("Enter your number to check if imput is odd or even - ");
    scanf("%d",&a);
    printf("\n\n");

    if (a % 5 == 0)
    {
        printf("The imput is divisible by 5\n");
    }
    else
    {
        printf("The imput is not divisible by 5\n");
    }
    
    return 0;
}