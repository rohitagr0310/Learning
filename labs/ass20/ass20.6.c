#include <stdio.h>

struct student_marks
{
    int sID;
    char sName;
    float phyMarks, chemMarks, mathMarks, per;

} s1, s2, s3, s4, s5;

int main()
{
    printf("Enter id and name of student in order of physics , chemistry , maths\n");

    printf("For 1st student - ");
    scanf("%d %s %f %f %f", &s1.sID, &s1.sName, &s1.phyMarks, &s1.chemMarks, &s1.mathMarks);
    s1.per = (s1.chemMarks + s1.mathMarks + s1.phyMarks) / 100;

    printf("For 2nd student - ");
    scanf("%d %s %f %f %f", &s2.sID, &s2.sName, &s2.phyMarks, &s2.chemMarks, &s2.mathMarks);
    s2.per = (s2.chemMarks + s2.mathMarks + s2.phyMarks) / 100;

    printf("For 3rd student - ");
    scanf("%d %s %f %f %f", &s3.sID, &s3.sName, &s3.phyMarks, &s3.chemMarks, &s3.mathMarks);
    s3.per = (s3.chemMarks + s3.mathMarks + s3.phyMarks) / 100;

    printf("For 4th student - ");
    scanf("%d %s %f %f %f", &s4.sID, &s4.sName, &s4.phyMarks, &s4.chemMarks, &s4.mathMarks);
    s4.per = (s4.chemMarks + s4.mathMarks + s4.phyMarks) / 100;

    printf("For 5th student - ");
    scanf("%d %s %f %f %f", &s5.sID, &s5.sName, &s5.phyMarks, &s5.chemMarks, &s5.mathMarks);
    s5.per = (s5.chemMarks + s5.mathMarks + s5.phyMarks) / 100;

    printf("ID | Name | Percentage ");
    printf("%d | %s | %0.2f ", s1.sID, s1.sName, s1.per);
    printf("%d | %s | %0.2f ", s2.sID, s2.sName, s2.per);
    printf("%d | %s | %0.2f ", s3.sID, s3.sName, s3.per);
    printf("%d | %s | %0.2f ", s4.sID, s4.sName, s4.per);
    printf("%d | %s | %0.2f ", s5.sID, s5.sName, s5.per);
    return 0;
}