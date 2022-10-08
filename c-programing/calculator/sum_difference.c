#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;
    int m;
    int sum1;
    int dif1;
    float x;
    float y;
    float sum2;
    float dif2;
    
    scanf("%d %d", &n, &m);
    scanf("\n");
    scanf("%0.2f %0.2f", &x, &y);
    
    sum1=n+m;
    sum2=x+y;
    dif1=n-m;
    dif2=x-y;
    
    printf("%d %d\n", sum1, dif1);
    printf("%0.1f %0.2f\n", sum2, dif2);
    
    return 0;
}