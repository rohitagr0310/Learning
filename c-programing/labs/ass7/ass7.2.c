#include <stdio.h>
void add()
{
    int add;
    int a,b;    
    printf("Enter first number - \n");
    scanf("%d",&a);

    printf("Enter Second number - \n");
    scanf("%d",&b);

    add=a+b;

    printf("Addition of two numbers - %d\n", add);
}

void sub()
{
    int sub;
    int a,b;    
    printf("Enter first number - \n");
    scanf("%d",&a);

    printf("Enter Second number - \n");
    scanf("%d",&b);

    sub=a-b;

    printf("Subraction of two numbers - %d\n", sub);
}

void mul()
{
    int mul;
    int a,b;    
    printf("Enter first number - \n");
    scanf("%d",&a);

    printf("Enter Second number - \n");
    scanf("%d",&b);

    mul=a*b;

    printf("Multiplication of two numbers - %d\n", mul);
}

void divi()
{
    int divi;
    int a,b;    
    printf("Enter first number - \n");
    scanf("%d",&a);

    printf("Enter Second number - \n");
    scanf("%d",&b);

    divi=a/b;

    printf("Division of two numbers - %d\n", divi);
}

int main()
{
    int a,b,i;
    printf("To use any operator, imput the code for it \n\n1)addition \n2)subtraction \n3)multiplication \n4)division");
    
    printf("which operator you want to use - \n");
    scanf("%d",&i);
    
    if (i==1)
    {
        add();
    }
    else if (i==2)
    {
        sub();
    }
    else if (i==3)
    {
        mul();
    }
    else if (i==4)
    {
        divi();
    }
    else
    {
        printf("Wrong imput");
    }
    
    return 0;
}