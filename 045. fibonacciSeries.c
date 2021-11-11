/*
factorial of a given number
*/
#include <stdio.h>

int main() {
  int n = 5;
  int a = -1;
  int b = 1;
  int i = 0;
  int sum;
  for (i = 0; i < n; i++) {
    sum = a + b;
    printf("\n%d", sum);
    a = b;
    b = sum;
  }
  return 0;
}

/*
output:

0
1
1
2
3
*/