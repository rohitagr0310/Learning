#include <stdio.h>
#include <string.h>

int main()
{
    struct student_marks
    {
        int sid;
        char sName;
        float phyMarks, chemMarks, mathMarks;
    } s[20];

    int name[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter Name of the student - ");
        scanf("%s", &name);
        strcpy(s[i].sName, name);

        printf("Enter id of student(%d) - ", i + 1);
        scanf("%d", &s[i].sid);

        printf("Enter physics marks of student(%d) - ", i + 1);
        scanf("%d", &s[i].phyMarks);

        printf("Enter chemistry marks of student(%d) - ", i + 1);
        scanf("%d", &s[i].chemMarks);

        printf("Enter maths marks of student(%d) - ", i + 1);
        scanf("%d", &s[i].mathMarks);

        printf("\n");
    }

    printf("S.no | ID | Name | Phy | Chem | Maths \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d | %d | %s | %d | %d | %d\n", i + 1, s[i].sid, s[i].name[], s[i].phyMarks, s[i].chemMarks, s[i].mathMarks);
    }

    return 0;
}