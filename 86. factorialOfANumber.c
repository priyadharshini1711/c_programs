/*
factorial of a number
*/

#include <stdio.h>

#include <math.h>

int main() {
  int n;
  printf("enter a number");
  scanf("%d", & n);
  int prod = 1;
  while (n > 1) {
    prod *= n;
    --n;
  }
  printf("factorial = %d", prod);
  return 0;
}

/*
output1

enter a number
5
factorial = 120

output2

enter a number
5
factorial = 120
*/