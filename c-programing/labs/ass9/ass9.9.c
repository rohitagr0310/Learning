#include <stdio.h>

int main()
{
    int a,t,h;

    printf("Enter a 4-digit number - ");
    scanf("%d",&a);

    t=a%10;
    h=a%100;

    printf("The digit at Tenth place - %d", t);
    printf("The digit at Hundredth place - %d", h);

    if (t==h)
    {
        printf("The digit at 10th place and 100th place are equal");
    }
    else
    {
        printf("The digit at 10th place and 100th place are NOT equal");       
    }
    
    return 0;
}