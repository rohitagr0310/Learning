#include <stdio.h>

void Circle()
{
    printf("----->  Circle  <----- \n\n");
    float r, c;
    float PI = 3.14;

    printf("Enter the Radius of the Circle -");
    scanf("%0.2f", &r);
    printf("\n\n");

    c = 2 * PI * r;

    printf("Circumfeerence of the Circle is %0.2f\n\n", c);
}

int main()
{
    Circle();
 
    return 0;
}