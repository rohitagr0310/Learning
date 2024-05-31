#include <stdio.h>

int main()
{
    int a, f = 1;
    printf("Enter the number you wish to know the factorial of - ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }

    printf("%d\n\n", f);
    return 0;
}