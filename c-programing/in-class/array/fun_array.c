#include <stdio.h>
void sort(int a[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("New  value for position a[%d] - ", i);
        scanf("%d ", &a[i]);
    }

    printf("New array - ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("size of %ld in function", (sizeof(a) / sizeof(int)));
}

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("old  value for position a[%d] - ", i);
        scanf("%d", &a[i]);
    }

    sort(a);

    printf("Old Array - ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("size of in main - %ld", (sizeof(a) / sizeof(int)));
    return 0;
}
