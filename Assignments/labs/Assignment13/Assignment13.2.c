#include <stdio.h>
void add();
void sub();
void mul();
void divi();

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
    int i;
    printf("To use any operator, imput the code for it \n\n1)addition \n2)subtraction \n3)multiplication \n4)division\n\n");
    
    printf("which operator you want to use - ");
    scanf("%d",&i);
    
    switch (i)
    {
    case 1:
        add();
        break;
    
    case 2:
        sub();
        break;

    case 3:
        mul();
        break;
    
    case 4:
        divi();
        break;

    default:
        printf("Wrong imput");
        break;
    }
    return 0;
}