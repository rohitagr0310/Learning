#include <stdio.h>

int main()
{
    int p = 5;

    {

        p++;

        printf("%d \n", p);
    }
    {

        p--;
        printf("%d", p);
    }
    return 0;
}