/*
get and print array
*/
#include <stdio.h>

int main() {
  int n = 10;
  int * p = & n;
  printf("%x", p);
  printf("\n%d", * p);
  return 0;
}

/*
output:

7c7ae94c
10
*/