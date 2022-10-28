#include <stdio.h>

int main()
{
    float f,c;

    printf(" enter temperature (in Fahrenheit) - ");
    scanf("%0.2f",&f);

    c=(f-32) *5/9;

    printf("temperature in celsius is - %0.2f", c);
    
    return 0;
}