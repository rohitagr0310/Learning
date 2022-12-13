#include <stdio.h>

void display();

int main()
{
    display();
    display();
    display();

    return 0;
}

void display()
{
    int i = 10;
    static int count = 1;
    printf("%d\t , %d\t\n", i, count);
    count++;
}