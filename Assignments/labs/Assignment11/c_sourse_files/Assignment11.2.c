#include <stdio.h>

int main()
{
    int a = 0;
    double d = 10.21;

    printf("size of int + double - %lu", sizeof(a + d));

    return 0;
}