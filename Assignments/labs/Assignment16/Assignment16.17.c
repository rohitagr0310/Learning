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
    int n,ans;
    printf("Enter a number to know its next prime - ");
    scanf("%d",&n);

    for (int i = n; i > 0; i++)
    {
        if (prime_checker(i)==1)
        {
            printf("The next prime number is %d \n\n",i);
            
            break;
        }
    }
    
    return 0;
}