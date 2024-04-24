#include <stdio.h>

int main()
{
   // this code prints the value of the variables imputed by user
    int a;
    int b;
    int c;
    
    printf("Enter the value of the First variable -");
    scanf("%d",&a);

    printf("Enter the value of the Second variable -");
    scanf("%d",&b);

    printf("Enter the value of the Third variable -");
    scanf("%d",&c);

    printf("Value of the First Variable is %d and second variable is %d and value of third variable is %d\n",a,b,c);
    
    return 0;
}