#include <stdio.h>

int main()
{
    int n,i=0;

    printf("Write the number of pairs you wish to calculate");
    scanf("%d",&n);

    while (i < n)
    {
        int a,b,add;

        printf("Enter first number - ");
        scanf("%d",&a);

        printf("Enter Second number - ");
        scanf("%d",&b);

        add=a+b;

        printf("the sum of the two numbers is %d",add);
    
        i=i+1;
    }
    
    return 0;
}