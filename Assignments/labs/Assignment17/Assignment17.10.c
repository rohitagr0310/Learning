#include <stdio.h>

int main()
{
    int n, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
        else
        {
            continue;
        }
    }

    return 0;
}