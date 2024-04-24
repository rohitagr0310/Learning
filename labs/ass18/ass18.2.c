#include <stdio.h>

int main()
{
    int a[10], sum = 0, avg;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d number - ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10;

    printf("The avg of all entered numbers is %d", avg;

    return 0;
}