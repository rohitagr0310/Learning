#include <stdio.h>

int main()
{
    float f,c;

    printf(" enter temperature (in Fahrenheit) - ");
    scanf("%f",&f);

    c=(f-32) *5/9;

    printf("temperature in celsius is - %f", c);
    
    return 0;
}