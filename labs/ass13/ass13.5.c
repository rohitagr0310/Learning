#include <stdio.h>

int main()
{
    int i,s1,s2,s3;

    printf("Enter three sides of a triangle (space seperated) - ");
    scanf("%d %d %d",&s1,&s2,&s3);

    printf("I can check for \n");
    printf("1) wether the triangle is isosceles\n");
    printf("2) wether the triangle is right angled\n");
    printf("3) wether the triangle is equilateral\n");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        if (s1==s2 || s2==s3 || s3==s1)
        {
            printf("The triangle is isosceles\n");
        }
        else
        {
            printf("The triangle is not isosceles\n");
        }
        break;
    
    case 2:
        if ((s1*s1)+(s2*s2)==(s3*s3) || (s1*s1)+(s3*s3)==(s2*s2) || (s2*s2)+(s3*s3)==(s1*s1))
        {
            printf("The triangle is Right Angled\n");
        }
        else
        {
            printf("The triangle is not Right Angled\n");
        }
        break;
        
    case 3:
        if (s1==s2 && s2==s3)
        {
            printf("The triangle is Equilateral\n");
        }
        else
        {
            printf("The triangle is not Equilateral\n");
        }
        break;

    default:
        printf("Invalid Option\n");
        break;
    }
    return 0;
}