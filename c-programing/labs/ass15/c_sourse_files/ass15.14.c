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
    printf("enter a number - ");
    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        if (prime_checker(i)==1)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}