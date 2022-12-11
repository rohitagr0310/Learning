#include <stdio.h>

int main()
{
    char c = 255;
    char d = -1;
    if (c < 0)
    {
        printf("c is less then 0\n", c);
    }
    else
    {
        printf("c is not less then 0\n");
    }
    if (d < 0)
    {
        printf("d is less then 0\n", d);
    }
    else
    {
        printf("d is not less then 0\n");
    }

    return 0;
}