/*
check if perfect square
*/
#include <stdio.h>

#include <math.h>

int main() {
  int num, rem, sum = 0, i;
  num = 28;
  for (int i = 1; i < num; i++) {
    rem = num % i;
    if (rem == 0) {
      sum = sum + i;
    }
  }
  if (sum == num)
    printf("%d is a Perfect Number", num);
  else
    printf("\n%d is not a Perfect Number", num);
  return 0;
}

/*
output

28 is a Perfect Number
*/