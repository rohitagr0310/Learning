#include <stdio.h>

int linear_search(int n, int key)
{
    if (n == key)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int n[10], key, ans[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number of the array for position %d - ", i);
        scanf("%d", &n[i]);
    }

    printf("Enter key - ");
    scanf("%d", &key);

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        ans[i] = linear_search(n[i], key);

        if (ans[i] == 1)
        {
            printf("Position is %d\n", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("Not found\n");
    }

    return 0;
}