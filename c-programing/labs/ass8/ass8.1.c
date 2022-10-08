#include <stdio.h>

int main()
{
    int a,b,c;

    printf("I can check which number is greater of thye three");

    printf("Enter first Number - ");
    scanf("%d",&a);

    printf("Enter Second Number - ");
    scanf("%d",&b);
    
    printf("Enter Third Number - ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("Largest number is %d", a);
    }
    else if (b>a && b>c)
    {
        printf("Largest Number is %d", b);
    }
    else
    {
        printf("Largest Nummer is %d", c);
    }
    
    return 0;
}