#include <stdio.h>

void Rectangle()
{
    printf("----->  Rectangle  <----- \n\n");
    float l, b, a;

    printf("Enter length and Breath -");
    scanf("%0.2f %0.2f", &l, &b);
    printf("\n\n");

    a = l * b;

    printf("Area of the Rectangle is %0.2f \n", a);
}

int main()
{
    Rectangle();

    return 0;
}