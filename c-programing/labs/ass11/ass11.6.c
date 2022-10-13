#include <stdio.h>

int main()
{
    int a,f;
    printf("Enter the number you wish to know the factorial of - ");
    scanf("%d",&a);

    for (int i = 0; i <= a; i++)
    {
        f=f*i;
    }
    
    return 0;
}