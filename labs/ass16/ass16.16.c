#include <stdio.h>
int prime_checker(int n);

int prime_checker(int n)
{
    int p=1;

    if(n==2 || n==3)
    {
        return p;
    }

    for (int i = 2 ; i < n ; i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
        else
        {
            p=1;
        }
    }

   return p;
}

int main()
{
    int a,b;

    printf("I can tell all prime numbers between any two numbers you put \n");
    printf("Enter the first number - ");
    scanf("%d",&a);

    printf("Enter the second number - ");
    scanf("%d",&b);

    for (a ; a <= b ; a++)
    {
        if (prime_checker(a)==1)
        {
            printf("%d ",a);
        }
    }
    
    printf("\n\n");

    return 0;
}