#include <stdio.h>

void Rectangle()
{
    printf("----->  Rectangle  <----- \n\n");
    float l, b, a, p;

    printf("Enter length and Breath -");
    scanf("%0.2f %0.2f", &l, &b);
    printf("\n\n");
    a = l * b;
    p = 2 * (l + b);

    printf("Area of the Rectangle is %0.2f \n", a);
    printf("Perimeter of the Rectangle is %0.2f \n\n", p);
}

void Square()
{
    printf("----->  Square  <----- \n\n");
    float s, a, p;

    printf("Enter side of the Square -");
    scanf("%0.2f", &s);
    printf("\n\n");

    a = s * s;
    p = 4 * s;

    printf("Area of the Square is %0.2f \n", a);
    printf("Perimeter of the Square is %0.2f\n\n", p);
}

void Circle()
{
    printf("----->  Circle  <----- \n\n");
    float r, a, c;
    float PI = 3.14;

    printf("Enter the Radius of the Circle -");
    scanf("%0.2f", &r);
    printf("\n\n");

    a = PI * (r * r);
    c = 2 * PI * r;

    printf("Area of the Circle is %0.2f \n", a);
    printf("Circumfeerence of the Circle is %0.2f\n\n", c);
}

void Triangle()
{
    printf("----->  Triangle  <----- \n\n");
    float s1,s2,s3,p;
    
    printf("Enter sides(3) of the Triangle -");
    scanf("%0.2f %0.2f %0.2f", &s1, &s2, &s3);
    printf("\n\n");

    p=s1+s2+s3;

    printf("Perimeter of the Triangle is %0.2f\n\n", p);
}

int main()
{
    Rectangle();
    Square();
    Circle();
    Triangle();

    return 0;
}