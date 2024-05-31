#include <stdio.h>

int main()
{
    int i, q, br = 200, fr = 50, pr = 500, sr = 150, t;
    printf("Hi welcome to the C resturant\n\n");
    printf("Here is the menu ->\n");
    printf("1) Burger       Rs=200 \n2) French Fries Rs=50 \n3) Pizza        Rs=500 \n4) Sandwiches   Rs=150\n\n");
    printf("What would you like to order - ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("How many would you like - ");
        scanf("%d", &q);

        t = q * br;

        printf("Here are your %d Burgers\ntotal charge is - %d\n\n", q, t);
        break;

    case 2:
        printf("How many would you like - ");
        scanf("%d", &q);

        t = q * fr;

        printf("Here are your %d French Fries\ntotal charge is - %d\n\n", q, t);
        break;

    case 3:
        printf("How many would you like - ");
        scanf("%d", &q);

        t = q * pr;

        printf("Here are your %d Pizza\ntotal charge is - %d\n\n", q, t);
        break;

    case 4:
        printf("How many would you like - ");
        scanf("%d", &q);

        t = q * sr;

        printf("Here are your %d Sandwiches\ntotal charge is - %d\n\n", q, t);
        break;

    default:
        printf("Enter some vaild choice\n\n");
        break;
    }

    return 0;
}