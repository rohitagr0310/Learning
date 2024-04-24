#include <stdio.h>

int main()
{
    int i,l;
    printf("Enter any year - ");
    scanf("%d",&i);

    l=i%4;

    switch (l)
    {
    case 0:
        printf("The year is a leap year\n");
        break;
    
    default:
        printf("The year is not a leap year\n");
        break;
    }

    return 0;
}