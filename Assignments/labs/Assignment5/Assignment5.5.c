#include <stdio.h>

void Square()
{
    printf("----->  Square  <----- \n\n");
    float s, p;

    printf("Enter side of the Square -");
    scanf("%0.2f", &s);
    printf("\n\n");

    p = 4 * s;

    printf("Perimeter of the Square is %0.2f\n\n", p);
}

int main()
{
    Square();
    return 0;
}