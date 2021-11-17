/*
swap two numbers without using a tthird number;
*/

#include <stdio.h>

int main() {
  int a = 10, b = 20;
  printf("before swapping %d %d", a, b);
  b = a + b;
  a = b - a;
  b = b - a;
  printf("\nafter swapping %d %d", a, b);
}

/*
output1:

before swapping 10 20
after swapping 20 10
*/