#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  printf("\nsum = %d",a+b);
  printf("\ndifference = %d", a-b);
  printf("\nproduct = %d", a*b);
  printf("\ndivision  = %d",a/b);
  printf("\nmodulo = %d",b%a);
  return 0;
}

/*
output:

sum = 30
difference = -10
product = 200
division  = 0
modulo = 0
*/
