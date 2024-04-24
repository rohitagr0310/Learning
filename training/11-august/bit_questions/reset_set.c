#include <stdio.h>

int main()
{
    int n, num;
    printf("what number you want to flip - ");
    scanf("%d", &num);

    printf("which bit would you like to flip from left most bit - ");
    scanf("%d", &n);

    int flip = 1 >> (n - 1);

    int result = num | flip;

    printf("%d", result);

    return 0;
}