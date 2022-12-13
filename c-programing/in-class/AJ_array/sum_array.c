#include <stdio.h>

int main()
{
    int n[10], s = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("Enter number -");
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        s = s + n[i];
        printf("%d\n", &s);
    }

    return 0;
}