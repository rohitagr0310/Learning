#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements - ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element for location %d - ", i + 1);
        scanf("%d", &arr[i]);
    }

    int ferequence[10] = {0};

    for (int i = 0; i < n; i++)
    {
        while (arr[i])
        {
            ferequence[arr[i] % 10]++;
            arr[i] = arr[i] / 10;
        }
    }

    for (int i = 9; i >= 0; i--)
    {
        while (ferequence[i])
        {
            printf("%d", i);
            ferequence[i]--;
        }
    }
    printf("\n");

    return 0;
}