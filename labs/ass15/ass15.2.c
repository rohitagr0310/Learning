#include <stdio.h>
float si(float p, float r, float t);

float si(float p, float r, float t)
{
    float i;

    i = p * r * t;

    return i;
}

int main()
{
    float p, r, t, i;

    printf("Enter the principle amount you borrowed - ");
    scanf("%f", &p);

    printf("Enter the interest rate at which you borrowed - ");
    scanf("%f", &r);

    printf("Enter the amount of time(years) for which you borrowed - ");
    scanf("%f", &t);

    i = si(p, r, t);

    printf("The radius of the circle is - %0.2f\n\n", i);

    return 0;
}