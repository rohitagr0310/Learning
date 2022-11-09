#include <stdio.h>
int prime(int n);

int prime(int n)
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

    ans=prime(n);

    if(ans==0)
    {
        printf("not a prime number \n\n");
    }
    else
    {
        printf("is a prime number \n\n");
    }
    return 0;
}