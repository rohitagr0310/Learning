#include <stdio.h>

void linear_search(int, int);

int a = 0;

int main()
{
    int n[10], key, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enteer number - ");
        scanf("%d", &n[i]);
    }

    printf("Enter number - ");
    scanf("%d", &key);

    linear_search(&n[10], &key);

    if (a == key)
    {
        printf("%d", key);
    }
    else
    {
        printf("not found");
    }

    return 0;
}
void linear_search(int p, int key)
{

    for (int i = 1; i <= 10; i++)
    {
        while (i != 0)
        {

            a = p == key ? key : 0;

            if (a == key)
            {
                break;
            }

            i = i - 1;
        }
        if (a == key)
        {
            break;
        }
    }
}