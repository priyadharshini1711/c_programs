/*
check if perfect square
*/
#include <stdio.h>

#include <math.h>

int main() {
  int n = 49;
  if (ceil((double) sqrt(n)) == floor((double) sqrt(n))) {
    printf("perfect square");
  } else {
    printf("not a perfect square");
  }
  return 0;
}

/*
output

perfect square
*/