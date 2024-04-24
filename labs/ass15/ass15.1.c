#include <stdio.h>
float circle(float r);

float circle(float r)
{
    float area;

    area = 3.14 * (r * r);

    return area;
}

int main()
{
    float r, area;

    printf("Enter the radius of the circle - ");
    scanf("%f", &r);

    area = circle(r);

    printf("The radius of the circle is - %0.2f\n\n", area);

    return 0;
}