#include <stdio.h>

int main ()
{
    int c,s,p,l;

    printf("I can calculate the whether you were in profit or in loss\n\n");

    printf("Enter Cost price - ");
    scanf("%d",&c);
    printf("\n\n");

    printf("Enter selling price - ");
    scanf("%d",&s);
    printf("\n\n");

    if (s>c)
    {
        printf("you were in profit \n");
        p=(s-c)/s;
        printf("by how much -%d",p);
    }
    else
    {
        l=(c-s)/c;
        printf("you were in loss \n");
        printf("by how much -%d",l);
    }
    
    return 0;
}