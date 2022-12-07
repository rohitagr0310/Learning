#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        int sid;
        char sName[20];
        int sRollno;
        unsigned int sMobile;
    } s[20];

    char name[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter Name of the student - ");
        scanf("%s", &name);
        strcpy(s[i].sName, name);

        printf("Enter id of student(%d) - ", i + 1);
        scanf("%d", &s[i].sid);

        printf("Enter rollno of student(%d) - ", i + 1);
        scanf("%d", &s[i].sRollno);

        printf("Enter Mobile number of student(%d) - ", i + 1);
        scanf("%d", &s[i].sMobile);
        printf("\n");
    }

    printf("\n\nS.no    | Name | Rollno | Id | Mobile\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d    | %s | %d | %d | %d \n", i + 1, s[i].sName, s[i].sRollno, s[i].sid, s[i].sMobile);
    }

    return 0;
}