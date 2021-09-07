/*
greatest of 2 numbers using pointers
*/

#include <stdio.h>

#include <string.h>

int main() {

  int a = 10;
  int b = 20;
  int * aptr = & a;
  int * bptr = & b;
  if (( * aptr) > ( * bptr)) {
    printf("a is greater");
  } else {
    printf("b is greater");
  }

  return 0;
}

/*
output:

b is greater

*/