#include <stdio.h>
int cube(int n);

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n, cu;

    printf("Enter any number - ");
    scanf("%d", &n);

    cu = cube(n);

    printf("Square of the number - %d", cu);

    return 0;
}