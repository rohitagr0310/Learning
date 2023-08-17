#include <stdio.h>

int main()
{
    int arr[10] = {10, 32, 7, 42, 25};
    int n = 5, x = 39;

    printf("Enter the amount ")

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("Yes\n");
                goto end;
            }
        }
    }
end:

    return 0;
}