#include <stdio.h>

int main()
{
    int a, b;
    int sub;

    printf("Enter first number - \n");
    scanf("%d", &a);

    printf("Enter Second number - \n");
    scanf("%d", &b);

    sub = a - b;

    printf("Subraction of two numbers - %d\n", sub);

    return 0;
}