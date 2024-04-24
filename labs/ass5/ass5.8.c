#include <stdio.h>

void Triangle()
{
    printf("----->  Triangle  <----- \n\n");
    float s1,s2,s3,p;
    
    printf("Enter sides(3) of the Triangle -");
    scanf("%0.2f %0.2f %0.2f", &s1, &s2, &s3);
    printf("\n\n");

    p=s1+s2+s3;

    printf("Perimeter of the Triangle is %0.2f\n\n", p);
}

int main()
{
    Triangle();

    return 0;
}