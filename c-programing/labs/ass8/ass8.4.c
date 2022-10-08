#include <stdio.h>

int main()
{
    int a;

    printf("Enter Number - ");
    scanf("%d",&a);
    printf("\n\n");

    if (a %7==0 && a%3==0)
    {
        printf("number is divisible by 7 and 3");
    }
    else
    {
        printf("Number is not divisible by 7 and 3");
    }
    
    return 0;
}