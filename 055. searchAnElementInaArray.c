/*
search an element in an array
*/
#include <stdio.h>

int main() {
  int a[5] = {
    1,
    2,
    3,
    4,
    5
  };
  int x = 2;
  for (int i = 0; i < 5; i++) {
    if (a[i] == x) {
      printf("x = %d is found in position %d", x, i);
      return 0;
    }
  }
  printf("x is not found");
  return 0;
}

/*
output:

x = 2 is found in position 1
*/