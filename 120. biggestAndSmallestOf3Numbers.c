/*
biggest and smallest of 3 numbers using ternary operator
*/

#include <stdio.h>

#include <math.h>

int main() {
  int a = 10, b = 20, c = 30;
  int greatest = (a > b && a > c) ? a : (b > c) ? b : c;
  int smallest = (a < b && a < c) ? a : (b < c) ? b : c;
  printf("the greatest of 3 numbers %d", greatest);
  printf("\nthe smallest of 3 numbers %d", smallest);
  return 0;
}

/*
output
the greatest of 3 numbers 30
the smallest of 3 numbers 10
*/