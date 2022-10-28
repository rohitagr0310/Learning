#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number of odd numbers you want in reverse - ");
    scanf("%d", &a);

    for (i = a ; i >= 0; i--)
    {
        if (i%2==1)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}