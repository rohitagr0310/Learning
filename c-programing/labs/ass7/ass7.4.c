#include <stdio.h>

int main ()
{
    int a;

    printf("Enter your number to check if imput is greater than 10 or not - ");
    scanf("%d",&a);
    printf("\n\n");

    if (a>10 )
    {
        printf("The imput is larger than 10\n");
    }
    else
    {
        printf("The imput is smaller than 10\n");
    }
    
    return 0;
}