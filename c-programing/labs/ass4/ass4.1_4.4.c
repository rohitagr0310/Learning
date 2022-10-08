#include <stdio.h>

int main()
{
    int a, b;
    int add, sub, mul, divi;

    printf("Enter first number - \n");
    scanf("%d", &a);

    printf("Enter Second number - \n");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    divi = a / b;

    printf("Addition of two numbers - %d\n", add);
    printf("Subraction of two numbers - %d\n", sub);
    printf("Multiplication of two numbers - %d\n", mul);
    printf("Division of two numbers - %d\n", divi);

    return 0;
}