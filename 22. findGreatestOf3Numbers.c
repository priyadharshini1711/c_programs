/*
find greatest of 3 Numbers
*/
#include <stdio.h>

int main() {
  int a = 20;
  int b = 10;
  int c = 30;
  if (a > b && a > c)
    printf("the value of a %d is greater", a);
  else if (b > c)
    printf("the value of b %d is greater", b);
  else
    printf("the value of c %d is greater", c);
  return 0;
}

/*
output:

the value of c 30 is greater
*/
