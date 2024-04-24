#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the position %d - ", i + 1);
        scanf("%d", &a[i]);

        b[i] = a[i];
    }

    printf("The value of another array (which is copied) is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}