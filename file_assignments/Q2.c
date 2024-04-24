#include <stdio.h>

int main()
{
    float e, total, charge, sub_charge;

    printf("Imput the unit of Electricity to claculate its charge - ");
    scanf("%f", &e);

    if (e < 50)
    {
        charge = e * 0.50;
        sub_charge = charge * 0.20;
        total = charge + sub_charge;

        printf("charge is - %0.2f\n\n", total);
    }
    else if (e > 50 && e < 150)
    {
        charge = (e * 0.75);
        sub_charge = charge * 0.2;
        total = charge + sub_charge;

        printf("charge is - %0.2f\n\n", total);
    }
    else if (e > 150 && e < 250)
    {
        charge = e * 1.20;
        sub_charge = charge * 0.2;
        total = charge + sub_charge;

        printf("charge is - %0.2f\n\n", total);
    }
    else
    {
        charge = e * 1.50;
        sub_charge = charge * 0.2;
        total = charge + sub_charge;

        printf("charge is - %0.2f\n\n", total);
    }

    return 0;
}