#include <stdio.h>

int main()
{
    int n;
    int a,b,add;

    printf("Write the number of pairs you wish to calculate");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("Pair no. - %d",i)

        printf("Enter first number - ");
        scanf("%d",&a);

        printf("Enter Second number - ");
        scanf("%d",&b);

        add=a+b;

        printf("the sum of the two numbers is %d",add);
    }
    
    return 0;
}