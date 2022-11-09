#include <stdio.h>
int digit_checker(int n, int d);

int digit_checker(int n, int d)
{
    int remin;
    do
    {
        remin = n % 10;

        if (remin == d)
        {
            return 1;
        }

        n = n / 10;

    } while (n / 10 != 0);

    return 0;
}

int main()
{
    int n, d, ans;

    printf("Enter the number - ");
    scanf("%d", &n);

    printf("Enter the digit you wish to check for - ");
    scanf("%d", &d);

    ans = digit_checker(n, d);

    if (ans==1)
    {
        printf("DIGIT IS PRESENT IN THE NUMBER.\n\n");
    }
    else
    {
        printf("DIGIT IS NOT PRESENT IN THE NUMBER.\n\n");
    }
    
    return 0;
}