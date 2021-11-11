/*
swap with reference
*/

#include <stdio.h>

void swap(int * a, int * b) {
  int temp = * a;
  * a = * b;
  * b = temp;
}
int main() {
  int a = 10;
  int b = 20;
  printf("values of a and b before swap");
  printf("\n%d %d", a, b);
  printf("\nvalues of a and b after swap");
  swap( & a, & b);
  printf("\n%d %d", a, b);
  return 0;
}

/*
output:

values of a and b before swap
10 20
values of a and b after swap
20 10
*/