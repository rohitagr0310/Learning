#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        int rollno;
        float marks;
        char name[20];
    };

    struct student s1;

    s1.rollno = 1;
    s1.marks = 75.5;
    s1.name[20] = "Rohit";

    // strcpy(s1.name, "Rohit");

    printf("%s with Roll no %d has marks %f\n", s1.name, s1.rollno, s1.marks);

    return 0;
}