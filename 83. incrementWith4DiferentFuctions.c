/*
increment using all 4 methods
*/

#include <stdio.h>

void increment1() {
  int a = 10;
  printf("\nmethod 1 = %d", ++a);
}

void increment2(int a) {
  printf("\nmethod 2 = %d", ++a);
}

int increment3() {
  int a = 10;
  return ++a;
}

int increment4(int a) {
  return ++a;
}
int main() {
  increment1();
  increment2(10);
  printf("\nmethod 3 = %d", increment3());
  printf("\nmethod 4 = %d", increment4(10));
  return 0;
}

/*
output

method 1 = 11
method 2 = 11
method 3 = 11
method 4 = 11
*/