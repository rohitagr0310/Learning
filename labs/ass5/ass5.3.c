#include <stdio.h>

void Rectangle()
{
    printf("----->  Rectangle  <----- \n\n");
    float l, b, p;

    printf("Enter length and Breath -");
    scanf("%0.2f %0.2f", &l, &b);
    printf("\n\n");
    p = 2 * (l + b);

    printf("Perimeter of the Rectangle is %0.2f \n\n", p);
}

int main()
{
    Rectangle();

    return 0;
}