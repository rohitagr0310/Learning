#include <stdio.h>

int main()
{
    int a;
    printf("I am going to print 10 natural numbers in reverse order");
    scanf("%d", &a);

    while (a--)
    {
        printf("%d", a);
    }

    return 0;
}