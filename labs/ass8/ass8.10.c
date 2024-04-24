#include<stdio.h>

int main()
{
    int w;

    printf("Enter the Number of the Week -");
    scanf("%d",&w);

    if (w==1) {
        printf("Day is Monday");
    }
    else if (w==2) {
        printf("Day is Tuesday");
    }
    else if (w==3) {
        printf("Day is Wednesday");
    }
    else if (w==4) {
        printf("Day is Thursday");
    }
    else if (w==5) {
        printf("Day is Friday");
    }
    else if (w==6) {
        printf("Day is Saturday");
    }
    else if (w==7) {
        printf("Day is Sunday");
    }
    else {
        printf("Wrong imput");
    }
    
    return 0;
}