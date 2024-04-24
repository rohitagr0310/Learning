#include <stdio.h>

int main()
{
    float a, b, c;
    float root1, root2, i, d;

    printf("Enter value of 'a' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);

    printf("Enter value of 'b' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &b);

    printf("Enter values of 'c' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    switch (d > 0)
    {
    case 1:
        root1 = (-b + (d * d)) / (2 * a);
        root2 = (-b - (d * d)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
        break;

    case 0:
        switch (d < 0)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            i = (d * d) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1, i, root2, i);
            break;

        case 0:
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }

    return 0;
}