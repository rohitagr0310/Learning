#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float sum;
    printf("\n Enter Two Numbers you want to add - ");
    scanf("%f %f" ,&num1 ,&num2);

    printf("");

    sum=num1+num2;

    printf("\n Sum is %0.2f \n\n" ,sum);

    return 0;
}
