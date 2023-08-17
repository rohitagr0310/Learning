#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("Left shift = %d\n", a << 1);
    printf("Right shift = %d", a >> 1);

    return 0;
}