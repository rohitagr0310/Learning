#include <stdio.h>
void odd(int n);

void odd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int n;

    printf("Enter the number you wish to print till - ");
    scanf("%d", &n);

    odd(n);

    return 0;
}