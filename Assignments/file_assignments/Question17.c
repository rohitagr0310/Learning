#include <stdio.h>

struct student_marks
{
    int sID;
    char sName;
    float phyMarks, chemMarks, mathMarks;
} s1, s2, s3, s4, s5;

int main()
{
    printf("Enter id and name of student in order of physics , chemistry , maths\n");

    printf("For 1st student - ");
    scanf("%d %s %f %f %f", &s1.sID, &s1.sName, &s1.phyMarks, &s1.chemMarks, &s1.mathMarks);

    printf("For 2nd student - ");
    scanf("%d %s %f %f %f", &s2.sID, &s2.sName, &s2.phyMarks, &s2.chemMarks, &s2.mathMarks);

    printf("For 3rd student - ");
    scanf("%d %s %f %f %f", &s3.sID, &s3.sName, &s3.phyMarks, &s3.chemMarks, &s3.mathMarks);

    printf("For 4th student - ");
    scanf("%d %s %f %f %f", &s4.sID, &s4.sName, &s4.phyMarks, &s4.chemMarks, &s4.mathMarks);

    printf("For 5th student - ");
    scanf("%d %s %f %f %f", &s5.sID, &s5.sName, &s5.phyMarks, &s5.chemMarks, &s5.mathMarks);

    printf("ID | Name | physics | chemistry | maths ");
    printf("%d | %s | %d | %d | %d ", s1.sID, s1.sName, s1.phyMarks, s1.chemMarks, s1.mathMarks);
    printf("%d | %s | %d | %d | %d ", s2.sID, s2.sName, s2.phyMarks, s2.chemMarks, s2.mathMarks);
    printf("%d | %s | %d | %d | %d ", s3.sID, s3.sName, s3.phyMarks, s3.chemMarks, s3.mathMarks);
    printf("%d | %s | %d | %d | %d ", s4.sID, s4.sName, s4.phyMarks, s4.chemMarks, s4.mathMarks);
    printf("%d | %s | %d | %d | %d ", s5.sID, s5.sName, s5.phyMarks, s5.chemMarks, s5.mathMarks);

    return 0;
}