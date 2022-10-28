#include <stdio.h>

int main()
{
    int a, b;
    int add;

    printf("Enter first number - \n");
    scanf("%d", &a);

    printf("Enter Second number - \n");
    scanf("%d", &b);

    add = a + b;

    printf("Addition of two numbers - %d\n", add);
    return 0;
}