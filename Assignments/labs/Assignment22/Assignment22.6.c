#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the element arr1[%d] - ", i);
        scanf("%d", &arr1[i]);
    }

    int *ptr = arr1;

    for (int i = n - 1; i >= 0; i--)
    {
        arr2[i] = *ptr;
        ptr++;
    }

    printf("The reverse array is - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n\n");

    return 0;
}