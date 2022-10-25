#include <stdio.h>
int even_odd(int i);

int even_odd(int i)
{
    int n;

    if (i %2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i,n;

    printf("Enter the Number  - ");
    scanf("%d",&i);

    n=even_odd(i);

    printf("The output is - %d\n\n",n);

    return 0;
}