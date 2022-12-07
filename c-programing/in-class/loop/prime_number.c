#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter number.\n");
    scanf("%d",&n);
    for (i=2; i<n; i++)
    {
        if(n%i==0){
            printf("it not a prime number.\n");
            break;
        }
        else{
            if(n%n==0){
            printf("it is prime number.\n");
            break;
            }
        }
    }
    return 0;
}