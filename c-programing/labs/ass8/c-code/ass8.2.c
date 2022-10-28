#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter Marks of the Student (5) - ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > 33 && b > 33 && c > 33 && d > 33 && e > 33)
    {
        printf("Student Passed the Examination");
    }
    else
    {
        printf("Student failed the Examination");
    }

    return 0;
}