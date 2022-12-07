#include <stdio.h>

int main()
{
    int p = 18;
    int q;
    q = p++;

    printf("Q1 Value of p is %d and value of the Q is %d\n", p, q);

    p = 18;
    p = p++;

    printf("Q2 %d\n", p);

    p = 18;
    p++;
    printf("Q3 %d", p);

    return 0;
}
