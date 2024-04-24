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

    s1.id = 001;
    strcpy(s1.name, "Ankit");
    s1.salary = 50000.00;

    s2.id = 002;
    strcpy(s2.name, "Rohit");
    s2.salary = 50000.00;

    s3.id = 003;
    strcpy(s3.name, "Vaibhav");
    s3.salary = 50000.00;

    printf("ID | Name | Salary\n");
    printf("%d | %s | %0.2f\n", s1.id, s1.name, s1.salary);
    printf("%d | %s | %0.2f\n", s2.id, s2.name, s2.salary);
    printf("%d | %s | %0.2f\n", s3.id, s3.name, s3.salary);

    return 0;
}