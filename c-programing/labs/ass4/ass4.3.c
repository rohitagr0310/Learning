#include <stdio.h>

int main()
{
    int a, b;
    int mul;

    printf("Enter first number - \n");
    scanf("%d", &a);

    printf("Enter Second number - \n");
    scanf("%d", &b);

    mul = a * b;

    printf("Multiplication of two numbers - %d\n", mul);
    
    return 0;
}