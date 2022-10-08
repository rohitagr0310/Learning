#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter Marks of the Student (5) - ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("\n\n");

    if (a > 33 && b > 33 && c > 33 && d > 33 && e > 33)
    {
        int t;
        t=a+b+c+d+e;
        printf("STudent Passed the Examination\n");
        printf("Total Marks of the Student are - %d",t);
    }
    else
    {
        printf("Student failed the Examination");
    }

    return 0;
}