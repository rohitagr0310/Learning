#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Check whether a triangle is valid or not");

    printf("Enter First side - ");
    scanf("%d",&a);

    printf("Enter Second side - ");
    scanf("%d",&b);
    
    printf("Enter Third side - ");
    scanf("%d",&c);
    
    if (a==b && b==c)
    {
        printf("The Triangle is Equilateral\n");
    }
    else if (a==b || b==c || c==a)
    {
        printf("The Triangle is Isosceles\n");
    }
    else
    {
        printf("The Triangle is Scalene\n");
    }
    
    return 0;
}