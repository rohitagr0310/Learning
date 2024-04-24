#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=100; i++){
        printf("i is %d\n",i);
        if(i==5);
        {
            break;
        }
        printf("Last statement in side for");
    }
    printf("after for loop.");
    return 0;
}