#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int r1, r2, r3;

        scanf("%d %d %d", &r1, &r2, &r3);

        if (r1 > r2 + r3)
        {
            printf("Yes\n");
        }
        else if (r2 > r1 + r3)
        {
            printf("Yes\n");
        }
        else if (r3 > r1 + r2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
