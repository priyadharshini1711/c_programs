/*
swap two numbers using function
*/

#include <stdio.h>

void swap(int a, int b) {
  int c = a;
  a = b;
  b = c;
  printf("\nafter swapping a and b");
  printf("\n%d", a);
  printf("\n%d", b);
}

int main() {
  int a = 10, b = 20;
  printf("before swapping a and b");
  printf("\n%d", a);
  printf("\n%d", b);
  swap(a, b);
  return 0;
}

/*
output

before swapping a and b
10
20
after swapping a and b
20
10
*/