#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers of your choice -");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        if (a>500 && a<1000)
        {
            printf("larger number is %d",a);
        }
        else
        {
            printf("Larger number is not between 500-1000");
        }
        
    }
    else
    {
          if (b>500 && b<1000)
        {
            printf("larger number is %d",b);
        }
        else
        {
            printf("Larger number is not between 500-1000");
        }
    }

    return 0;
}