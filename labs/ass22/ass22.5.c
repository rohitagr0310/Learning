#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int arr[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the element arr[%d] - ", i);
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;

        ptr++;
    }

    printf("The addition of all the elements in the array is %d\n\n", sum);

    return 0;
}