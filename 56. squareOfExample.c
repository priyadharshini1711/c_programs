/*
square of array elements
*/
#include <math.h>

#include <stdio.h>

int main() {
  int a[5] = {
    1,
    2,
    3,
    4,
    5
  };
  for (int i = 0; i < 5; i++) {
    printf("\nsquare of a number %d = %d", a[i], a[i] * a[i]);
  }
  return 0;
}

/*
output:

square of a number 1 = 1
square of a number 2 = 4
square of a number 3 = 9
square of a number 4 = 16
square of a number 5 = 25
*/