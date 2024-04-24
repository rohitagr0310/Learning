#include <stdio.h>

int main()
{
    char name[40];
    printf("enter your name - ");
    fgets(name, 40, stdin);

    printf("\nHello , %s\n", name);
    return 0;
}