#include <stdio.h>
//#define PI = 3.14;

void Rectangle()
{
    printf("----->  First for Rectangle  <----- \n\n");
    int l, b, a, p;

    printf("Enter length and Breath -");
    scanf("%d %d", &l, &b);
    printf("\n\n");
    a = l * b;
    p = 2 * (l + b);

    printf("Area of the Rectangle is %d \n", a);
    printf("Perimeter of the Rectangle is %d \n\n", p);
}

void Square()
{
    printf("----->  Second for Square  <----- \n\n");
    int s, a, p;

    printf("Enter side of the Square -");
    scanf("%d", &s);
    printf("\n\n");

    a = s * s;
    p = 4 * s;

    printf("Area of the Square is %d \n", a);
    printf("Perimeter of the Square is %d\n\n", p);
}

void Circle()
{
    printf("----->  Last for Circle  <----- \n\n");
    int r, a, c;
    float PI = 3.14;

    printf("Enter the Radius of the Circle -");
    scanf("%d", &r);
    printf("\n\n");

    a = PI * (r * r);
    c = 2 * PI * r;

    printf("Area of the Circle is %d \n", a);
    printf("Circumfeerence of the Circle is %d\n\n", c);
}

int main()
{
    Rectangle();
    Square();
    Circle();
    return 0;
}
