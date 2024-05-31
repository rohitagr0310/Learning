#include <stdio.h>

int main()
{
    int a, b;
    int divi;

    printf("Enter first number - \n");
    scanf("%d", &a);

    printf("Enter Second number - \n");
    scanf("%d", &b);

    divi = a / b;

    printf("Division of two numbers - %d\n", divi);

    return 0;
}