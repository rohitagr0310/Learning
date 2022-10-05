#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,t,a;

    printf("Enter 1st subject marks - ");
    scanf("%d",&m1);
    printf("\n");
    
    printf("Enter 2nd subject marks - ");
    scanf("%d",&m2);
    printf("\n");
    
    printf("Enter 3rd subject marks - ");
    scanf("%d",&m3);
    printf("\n");
    
    printf("Enter 4th subject marks - ");
    scanf("%d",&m4);
    printf("\n");
    
    printf("Enter 5th subject marks - ");
    scanf("%d",&m5);
    printf("\n");

    t=m1+m2+m3+m4+m5;
    a=t/5;

    printf("Aggregate Marks of the student are %d",a);
    
    // aggregate marks = total marks / total number of subjects
    
    return 0;
}