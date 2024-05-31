#include <stdio.h>

int main()
{
    struct employee
    {
        int id;
        char name;
        float salary;
    };

    struct employee s[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter the employee id , name and salary - ");
        scanf("%d %s %f", &s[i].id, &s[i].name, &s[i].salary);
    }

    printf("ID | Name | Salary \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d | %s | %0.2f", s[i].id, s[i].name, s[i].)
    }

    return 0;
}