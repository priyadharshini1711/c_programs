/*
BODMAS rule in C
*/
#include <stdio.h>

int main() {
  int a = 6;
  int b = 4;
  int c = 2;
  int result;
  result = a - b + c; // 4
  printf("a - b + c = %d \n", result);

  result = a + b / c; // 8
  printf("a + b / c = %d \n", result);

  result = (a + b) / c; // 5
  printf("(a + b) / c = %d \n", result);
  return 0;
}

/*
output:

a - b + c = 4 
a + b / c = 8 
(a + b) / c = 5 
*/