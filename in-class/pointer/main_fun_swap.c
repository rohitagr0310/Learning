#include <stdio.h>

void swap(int, int);

int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    printf("Main-Befor swap:a=%d  b=%d\n", a, b);

    swap(a, b);
    printf("Main-After swap: a=%d  b=%d\n", a, b);

    return 0;
}

void swap(int p, int q)
{
    int temp;
    printf("Function-Before swap: p=%d  q=%d\n", p, q);

    temp = p;
    p = q;
    q = temp;
    printf("Function-Before swap: p=%d  q=%d\n", q, p);
}
