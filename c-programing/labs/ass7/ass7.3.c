#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value between 0 to 100 - ");
    scanf("%d",&a);
    printf("\n\n");

    if (a>50 && a<100)
    {
        printf("SUCCESS\n");
    }
    else
    {
        printf("FAIL\n");
    }
    
    return 0;
}