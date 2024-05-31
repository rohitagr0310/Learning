#include <stdio.h>
void natural(int n);

void natural(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter the number you wish to print till - ");
    scanf("%d", &n);

    natural(n);

    return 0;
}