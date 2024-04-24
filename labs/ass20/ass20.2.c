#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        int id;
        char name[30];
        float salary;
    };

    struct employee s1, s2, s3;

    printf("Enter the id with name and salary of the employ 1 (in order) - ");
    scanf("%d %s %f", &s1.id, &s1.name, &s1.salary);

    printf("Enter the id with name and salary of the employ 2 (in order) - ");
    scanf("%d %s %f", &s2.id, &s2.name, &s2.salary);

    printf("Enter the id with name and salary of the employ 3 (in order) - ");
    scanf("%d %s %f", &s3.id, &s3.name, &s3.salary);

    printf("ID | Name | Salary\n");
    printf("%d | %s | %0.2f\n", s1.id, s1.name, s1.salary);
    printf("%d | %s | %0.2f\n", s2.id, s2.name, s2.salary);
    printf("%d | %s | %0.2f\n", s3.id, s3.name, s3.salary);

    return 0;
}