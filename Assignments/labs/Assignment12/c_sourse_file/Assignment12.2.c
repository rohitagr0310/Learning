#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number till you wish to print - ");
    scanf("%d",&a);

    for (int i = 0; i <= a; i++)
    {
        printf("%d ",i);
    }
    
    return 0;
}