#include <stdio.h>

int main()
{
    int a = 0, b = 0, x, y;
    x = ++a || ++b;
    y = a++ || ++b;
    printf("A = %d and B = %d", a, b);
    printf("\nx = %d", x);
    printf("\ny = %d", y);

    return 0;
}