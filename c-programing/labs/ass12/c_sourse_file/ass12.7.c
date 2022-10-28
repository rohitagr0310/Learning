#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you wish to print till (reverse) - ");
    scanf("%d",&a);

    for (int i = a; i >= 0; i--)
    {
        printf("%d ",i);
    }
    
    printf("\n\n");
    
    return 0;
}