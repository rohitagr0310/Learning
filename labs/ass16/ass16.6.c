#include <stdio.h>
int sum(int n);

int sum(int n)
{
    int f=0;

    for (int i = 1; i <= n; i++)
    {
        f=f*i;
    }

    return f;
}
int main()
{
    int n,ans;

    printf("Enter a number to know the sum till - ");
    scanf("%d",&n);

    ans=sum(n);

    printf("the sum is %d",ans);
    
    return 0;
}