#include <stdio.h>

void Circle()
{
    printf("----->  Circle  <----- \n\n");
    float r, a;
    float PI = 3.14;

    printf("Enter the Radius of the Circle -");
    scanf("%0.2f", &r);
    printf("\n\n");

    a = PI * (r * r);

    printf("Area of the Circle is %0.2f \n", a);
}

int main()
{
    Circle();

    return 0;
}