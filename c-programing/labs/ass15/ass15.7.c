#include <stdio.h>
int factorial(int n);
int nCr(int n, int r);

int factorial(int n)
{
	if(n == 0)
    {
	return 1;
    }

	int fact = 1;
	
    for (int i = 2; i <= n; i++)
    {
		fact = fact * i;
    }
	return fact;
}

int nCr(int n, int r)
{
    int combi;

    combi=factorial(n) / (factorial(r) * factorial(n - r));

	return combi;
}

int main() {
	int n, r,ans;

    printf("Enter the number of n items - ");
    scanf("%d",&n);
    
    printf("Enter the number of r selected items - ");
    scanf("%d",&r);
    
    ans=nCr(n,r);

	printf("%d",ans);

	return 0;
}