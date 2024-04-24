#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        int sid;
        char sName[30];
        int sRollno;
        unsigned int sMobNo;
    };

    struct student s1, s2, s3;

    printf("Enter the id with Name and Rollno and mobile no of the Student 1 (in order) - ");
    scanf("%d %s %i %i", &s1.sid, &s1.sName, &s1.sRollno & s1.sMobNo);

    printf("Enter the id with Name and Rollno and mobile no of the Student 2 (in order) - ");
    scanf("%d %s %i %i", &s2.sid, &s2.sName, &s2.sRollno & s1.sMobNo);

    printf("Enter the id with Name and Rollno and mobile no of the Student 3 (in order) - ");
    scanf("%d %s %i %i", &s3.sid, &s3.sName, &s3.sRollno & s1.sMobNo);

    printf("ID | Name | Rollno | Mobile no\n");
    printf("%d | %s | %i | %i\n", s1.sid, s1.sName, s1.sRollno, s1.sMobNo);
    printf("%d | %s | %i | %i\n", s2.sid, s2.sName, s2.sRollno, s1.sMobNo);
    printf("%d | %s | %i | %i\n", s3.sid, s3.sName, s3.sRollno, s1.sMobNo);

    return 0;
}