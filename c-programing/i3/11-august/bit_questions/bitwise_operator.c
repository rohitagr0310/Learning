#include <stdio.h>

int main()
{
    int i = 040, j = 0x20, k, l, m;

    k = i | j;
    l = i & j;
    m = i ^ j;

    printf("%d %d %d %d %d", i, j, k, l, m);

    return 0;
}