#include <stdio.h>

int main()
{
    int feet,inches;

    printf("Enter student height (in feets) - ");
    scanf("%d",&feet);
    printf("\n\n");
    
    inches=feet*12;

    printf("Student's height is - %d", inches);
    
    return 0;
}