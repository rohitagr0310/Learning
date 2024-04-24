#include <stdio.h>
int reverse(int a[]);

int reverse(int a[]);
int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the position %d - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The reverse array is - ");

    for (int i = n; i < 0; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}