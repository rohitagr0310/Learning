#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number of odd numbers you want - ");
    scanf("%d", &a);

    for (i = 1 ; i <= a; i++)
    {
        if (i%2==1)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}