#include <stdio.h>

int main()
{
    char name[40];
    printf("enter your name - ");
    scanf("%[^\n]", name);

    printf("\nHello , %s\n", name);
    return 0;
}