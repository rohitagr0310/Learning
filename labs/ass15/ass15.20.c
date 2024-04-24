#include <stdio.h>
int factorial(int i);

int factorial(int i)
{
    int fact=1;

    for (int j = 1; j <= i; j++)
    {
        fact=fact*j;
    }
    
    return fact;
}

int main()
{
    int sum=0;

    printf("The series is 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5\n\n");

    for (int i = 1; i <= 5; i++)
    {
        sum=sum+(factorial(i)/i);
    }    

    printf("The sum of the series is - %d\n\n",sum);

    return 0;
}