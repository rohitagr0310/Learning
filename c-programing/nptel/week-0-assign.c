#include <stdio.h>
#define FUN(i, j) i##j

int main()
{
    int v1 = 10;
    int v2 = 20;
    printf("%d", FUN(v, 2));
    return 0;
}