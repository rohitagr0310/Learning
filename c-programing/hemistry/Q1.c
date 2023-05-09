#include <stdio.h>

int main()
{
    int dob, mobile_no;
    char name[50];

    printf("Enter the Name - ");
    scanf("%s", name);

    printf("Enter the date of birth - ");
    scanf("%d", &dob);

    printf("Enter the Mobile No. - ");
    scanf("%d", &mobile_no);

    printf("Entered details are - \n");
    printf("Name - %s", name);
    printf("Date of Birth - %d", dob);
    printf("Mobile number - %d", mobile_no);

    return 0;
}