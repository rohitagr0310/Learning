#include <stdio.h>

int main()
{
    int i,p,n;
    printf("Enter your number - ");
    scanf("%d",&i);

    switch (i>0)
    {
    default:
        i=-i;
        printf("New Number is %d\n",i);
        break;
        return 0;
    }

    switch (i<0)
    {
    default:
        i=-i;
        printf("New Number is %d\n",i);
        break;
        return 0;
    }

}