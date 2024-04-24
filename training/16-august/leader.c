#include <stdio.h>

int main()
{
    int arr[10] = {16, 17, 4, 3, 5, 2}, n = 6;

    int heightest = -9999;
    for (int i = n - 1; i >= 0; i--)
    {
        if (heightest < arr[i])
        {
            heightest = arr[i];
            printf("%d ", heightest);
        }
    }

    printf("\n");
    return 0;
}