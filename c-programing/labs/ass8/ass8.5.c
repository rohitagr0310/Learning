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
            printf("Imput is possitive");
        }
        else
        {
            printf("Imput is negative");
        }
        
    }
    
    return 0;
}