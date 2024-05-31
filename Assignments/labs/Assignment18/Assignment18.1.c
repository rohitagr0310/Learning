#include <stdio.h>

int main()
{
    int a[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d number - ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("\nThe sum of all entered numbers is %d\n\n", sum);

    return 0;
}