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
    
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("The Triangle is Valid\n");
    }
    else
    {
        printf("The Triangle is not valid\n");
    }
    
    return 0;
}