#include <stdio.h>
int find_max(int *x, int *y);

int find_max(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}

int main()
{
    int a, b, max;

    printf("Enter the two numbers - ");
    scanf("%d %d", &a, &b);

    max = find_max(&a, &b);

    printf("The max number in between them is %d\n", max);

    return 0;
}