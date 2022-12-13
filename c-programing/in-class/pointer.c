#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int *iptr;
    iptr = &a;

    printf("value of a is %d\n", a);
    printf("value of iptr is %d\n", *iptr);
    printf("address of a is %u\n", &a);
    printf("address of iptr is %u\n", iptr);
    printf("address of b is %u\n", &b);
    printf("address of iptr is %u\n", &*iptr);

    return 0;
}
