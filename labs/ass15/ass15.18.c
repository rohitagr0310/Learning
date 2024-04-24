#include <stdio.h>
int square(int n);

int square(int n)
{
    return n*n;
}


int main()
{
    int n,sq;

    printf("Enter any number - ");
    scanf("%d",&n);

    sq=square(n);

    printf("Square of the number - %d",sq);

    return 0;
}