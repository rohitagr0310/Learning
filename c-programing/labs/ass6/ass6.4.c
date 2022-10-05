#include <stdio.h>

int main()
{
    int d,m,cm,mm;

    printf("Distance between two cities is (kms) - ");
    scanf("%d",&d);
    printf("\n\n");
    
    m=d/1000;
    cm=m/100;
    mm=cm/10;

    printf("Distance in m - %d\n",m);
    printf("Distance in m - %d\n",cm);
    printf("Distance in m - %d\n",mm);
    
    return 0;
}