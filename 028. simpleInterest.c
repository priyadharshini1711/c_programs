/*
find if even or odd
*/
#include <stdio.h>

int main() {
  int principal = 1000;
  int duration = 2;
  int rate = 2;
  int simple_interest;
  simple_interest = (principal * duration * rate) / 100;
  printf("simple interest = %d", simple_interest);
  return 0;
}

/*
output:

simple interest = 40
*/