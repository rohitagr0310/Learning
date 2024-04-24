#include <stdio.h>

int main()
{
    int d,m,cm;

    printf("Distance between two cities is (kms) - ");
    scanf("%d",&d);
    printf("\n\n");
    
    cm=d*100000;
    
    printf("Distance in m - %d\n",cm);
    
    return 0;
}