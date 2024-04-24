#include <stdio.h>
int sum(int n);

int sum(int n)
{
    int sum=0;

    for (int i = 0; i <= n; i++)
    {
        sum=sum+(i*i);
    }

    return sum;
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