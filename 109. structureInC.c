/*
structure in c 
*/

#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main() {
  struct Point p1 = {
    0,
    1
  };
  printf("structure point values");
  printf("\n%d", p1.x);
  printf("\n%d", p1.y);
  return 0;
}

/*
output

structure point values

0

1

*/