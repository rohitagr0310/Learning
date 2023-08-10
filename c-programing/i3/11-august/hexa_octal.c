#include <stdio.h>

int main()
{
    int a;

    printf("The number is - ");
    scanf("%d", &a);

    printf("The hexa number is %x\nThe octal number is %o", a, a);

    return 0;
}