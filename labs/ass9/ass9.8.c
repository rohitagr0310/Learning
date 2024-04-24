#include<stdio.h>  

int main()   
{   
  int a, b;  

  printf("Enter the value of a and b -");  
  scanf("%d %d",&a,&b);  
  printf("before swapping numbers - %d , %d\n", a,b);  
  
/*swapping*/  

  a = a+b;
  b = a-b;
  a = a-b;  

  printf("After swapping - %d , %d", a,b);   

  return 0;   
}  