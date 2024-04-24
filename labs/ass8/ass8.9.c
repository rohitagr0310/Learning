#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number and i will tell the number in its unit place\n");
    printf("Enter you Number - ");
    scanf("%d",&a);

    printf("%d", a % 10);
    
    return 0;
}