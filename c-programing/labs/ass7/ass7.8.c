#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    
    printf("Enter valur of a - ");
    scanf("%d",&a);

    printf("Enter value of b - ");
    scanf("%d",&b);
    
    printf("Enter value of c - ");
    scanf("%d",&c);
    
    d = (b^b) - 4*a*c;

    if (d>0)
    {
        printf("Quadratic equation is Real and Unequal\n");
    }
    else if (d=0)
    {
        printf("Quadratic equation is Real and Equal\n");
    }
    else if (d<0)
    {
        printf("Quadratic equation is Imaginary and Unequal\n");
    }
    
    return 0;
}