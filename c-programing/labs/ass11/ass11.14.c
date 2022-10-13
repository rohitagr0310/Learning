#include <stdio.h>

int main()
{
    int a, i, j;
    printf("i am now going to print the table of 2 - ");

    for (i = 0; i <= 20; i++)
    {
        if (i%2==0)
        {
        printf("%d\n", i);    
        }   
    }

    return 0;
}