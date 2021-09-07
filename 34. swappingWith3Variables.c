/*
swap variables using 3 variables
*/
#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  int c;
  printf("values of a and b before swapping is %d %d", a, b);
  c = a;
  a = b;
  b = c;
  printf("\nvalues of a and b after swapping is %d %d", a, b);
  return 0;
}

/*
output:

values of a and b before swapping is 10 20
values of a and b after swapping is 20 10
*/