#include <stdio.h>

void Square()
{
    printf("----->  Square  <----- \n\n");
    float s, a;

    printf("Enter side of the Square -");
    scanf("%0.2f", &s);
    printf("\n\n");

    a = s * s;

    printf("Area of the Square is %0.2f \n", a);
}

int main()
{
    Square();

    return 0;
}