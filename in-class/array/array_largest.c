#include <stdio.h>

int main()
{
    int a[10], se;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number - ");
        scanf("%d", &a[i]);

        se=a[0];

        if (a[i] > se)
        {
            se=a[i];
        }
    }

    printf("%d",se);

    return 0;
}
