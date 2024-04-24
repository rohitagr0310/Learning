#include <stdio.h>
int lcm(int a , int b);

int lcm(int a , int b)
{
    int lcm=a>b?a:b;
    int l=1;

    while (l=1)
    {
        if (lcm%a==0 && lcm%b==0)
        {
            return lcm;
        }
        
        ++lcm;
    }
}

int main()
{
    int a,b,ans;

    printf("to calculate its lcm Enter two numbers\n\n");
    printf("Enter first numbers - ");
    scanf("%d",&a);

    printf("Enter second numbers - ");
    scanf("%d",&b);

    ans = lcm(a,b);

    printf("%d \n\n",ans);

    return 0;
}
