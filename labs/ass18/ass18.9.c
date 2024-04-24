#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number of position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The reverse array is \n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}