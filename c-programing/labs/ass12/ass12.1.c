#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of times you want to print hello world");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d) Hello World\n", i);
    }

    return 0;
}