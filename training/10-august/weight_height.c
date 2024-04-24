#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int weight, height;

        scanf("%d %d", &weight, &height);

        if (weight < 50 && height > 170)
        {
            count++;
        }
    }

    printf("the number of boys is = %d", count);

    return 0;
}