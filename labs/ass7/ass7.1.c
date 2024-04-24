#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter first Number - ");
    scanf("%d",&a);
    printf("\n\n");
    
    printf("Enter Second Number - ");
    scanf("%d",&b);
    printf("\n\n");

    if (a>b)
    {
        printf("Larger number is - %d",a);
    }
    else
    {
        printf("Larger Number is - %d",b);
    }
    
    return 0;
}