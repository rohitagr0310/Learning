#include <stdio.h>

int main()
{
    int n, i;

    printf("Write the number you want to print till - ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
    }

    return 0;
}