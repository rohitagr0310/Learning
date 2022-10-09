#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter First imput - ");
    scanf("%d",&a);

    printf("Enter First imput - ");
    scanf("%d",&a);

    printf("Before Swapping , First variable - %d second variable - %d", a,b);

    c=a;
    a=b;
    b=c;

    printf("After swapping, First variable - %d Second Variable - %d",a,b);

    return 0;
}