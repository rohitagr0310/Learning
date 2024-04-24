#include <stdio.h>

int main()
{
    int m;

    printf("Imput the muber of the month - ");
    scanf("%d",&m);

    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
    {
        printf("Numbers of days is 31\n");
    }
    else if (m==4 || m==6 || m==9 || m==11)
    {
        printf("Numbers of days is 30\n");
    }
    else if (m==2)
    {
        printf("Number of days is 28\n");
    }
    else
    {
        printf("Wrong Imput\n");
    }
    
    return 0;
}