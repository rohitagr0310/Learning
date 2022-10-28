#include <stdio.h>

int main()
{
    int usd,inr;

    printf("I can Convert USD to INR");
    printf("Enter your Money - ");
    scanf("%d",&usd);

    inr=usd*80;

    printf("%d",inr);
    
    return 0;
}