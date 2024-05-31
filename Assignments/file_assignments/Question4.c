#include <stdio.h>

int main()
{
    int n;

    printf("Enter how many numbers you want to print in reverse order - ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d ", i)
    }

    return 0;
}