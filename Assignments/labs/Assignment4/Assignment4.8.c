#include <stdio.h>

int main()
{
    int d,mm;

    printf("Distance between two cities is (kms) - ");
    scanf("%d",&d);
    printf("\n\n");
    
    mm=d*1000000;

    printf("Distance in m - %d\n",mm);
    
    return 0;
}