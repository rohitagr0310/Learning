#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

  int a=1;
  
  printf("Output AND = %d\n", a&n);
  printf("Output OR  = %d\n", a|n);
  printf("Output XOR = %d\n", a^n);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
