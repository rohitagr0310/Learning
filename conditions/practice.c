#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Write four numbers to find the largest among them (Put spaces in between them) -");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("Largest Numbers is - %d\n", a);
    }
    else
    {
        printf(" ");
    }

    if (b > c && b > d && b > a)
    {
        printf("Largest Numbers is - %d\n", b);
    }
    else
    {
        printf(" ");
    }

    if (c > d && c > a && c > b)
    {
        printf("Largest Numbers is - %d\n", c);
    }
    else
    {
        printf(" ");
    }

    if (d > b && d > c && d > a)
    {
        printf("Largest Numbers is - %d\n", d);
    }
    else
    {
        printf(" ");
    }

    return 0;
}