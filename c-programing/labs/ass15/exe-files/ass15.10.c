#include <stdio.h>

int prime_number(int i)
{
    int pr;

    if (i == 2 || i == 3)
    {
        pr=1;
        
        return pr;
    }

    for (int k = 2; k < i; k++)
    {
        if (i % k == 0)
        {
            pr = 0;
            break;
        }
        else
        {
            pr = 1;
        }
    }
    return pr;
}

void prime_factor(int input)
{
    int p=0,a=0;

    for (int i = 2; i < input; i++)
    {
        a=prime_number(i);
        
        if (input%i==0)
        {
            p=1;
            
            if (a==0)
            {
                p=0;

                i=i+1;
            }
        }

        if (p==1)
        {
            input=input/i;

            printf(" %d ",i);
            p=0;
        }
    }
}

int main()
{
    int input;

    printf("Enter the number - ");
    scanf("%d", &input);

    prime_factor(input);

    printf("\n\n");
    return 0;
}