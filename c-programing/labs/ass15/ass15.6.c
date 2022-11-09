#include <stdio.h>
int fact(int a);

int fact(int a)
{
    int fact;
    
	if(a == 0)
    {
	return 1;
    }

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}
int main()
{
    int a, ans;

    printf("Enter the number you wish to know factorial of - ");
    scanf("%d", &a);

    ans = fact(a);

    return 0;
}