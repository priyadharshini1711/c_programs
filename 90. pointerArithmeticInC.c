/*
pointer arithmetic in c
*/

#include <stdio.h>

int main() {

  int
  var [] = {
    10,
    100,
    200
  };
  int i, * ptr;
  ptr =
    var;

  for (i = 0; i < 3; i++) {
    printf("Address of var[%d] = %x\n", i, ptr);
    printf("Value of var[%d] = %d\n", i, * ptr);
    ptr++;
  }
  return 0;
}

/*
output:

Address of var[0] = 117e617c
Value of var[0] = 10
Address of var[1] = 117e6180
Value of var[1] = 100
Address of var[2] = 117e6184
Value of var[2] = 200
*/