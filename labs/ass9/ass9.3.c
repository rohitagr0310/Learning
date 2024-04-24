#include <stdio.h>

int main()
{
    int a;

    printf("Enter Number - ");
    scanf("%d",&a);
    printf("\n\n");

    if (a %2==0)
    {
        if (a %3==0 && a%2==0)
        {
            printf("The number is even and is divisible by 2 and 3");
        }
        else
        {
            printf("the number is even but not divisible by 2 and 3");
        }
    }
    else
    {
        if (a%5==0)
        {
            printf("the number is odd and is divisible by 5");
        }
        else
        {
            printf("the number is odd but not divisible by 5");
        }
    }
    
    return 0;
}