/*
add 2 element to 3 element in array
*/
#include <stdio.h>

int main() {
  int n = 3;
  int a[n];
  a[0] = 1;
  a[1] = 2;
  a[2] = a[0] + a[1];
  printf("1st element %d", a[0]);
  printf("\n2nd element %d", a[1]);
  printf("\n3rd element %d", a[2]);
  return 0;
}

/*
output:

1st element 1
2nd element 2
3rd element 3
*/