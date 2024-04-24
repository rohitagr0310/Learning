#include <stdio.h>

int main()
{
    int a;
    int b;
    char c;
    float f;

    printf("address of a - %u has garbage value of %d\n", &a, a);
    printf("address of b - %u has garbage value of %d\n", &b, b);
    printf("address of c - %u has garbage value of %c\n", &c, c);
    printf("address of f - %u has garbage value of %f\n", &f, f);
    return 0;
}