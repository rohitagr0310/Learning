#include <stdio.h>

int main()
{
    int a;

    printf("Enter your imput - ");
    scanf("%d",&a);

    if (a==0)
    {
        printf("Imput is Zero");
    }
    else
    {
        if (a>0)
        {
            if (a%10==0)
            {
                printf("Imput is possitive and divisible by 10");
            }
            else
            {
                printf("Imput is possitive but not divisible by 10");
            }
        }
        else
        {
            printf("Imput is negative");
        }
    }
    
    return 0;
}