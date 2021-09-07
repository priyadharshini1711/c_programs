/*
check if perfect square
*/
#include <stdio.h>

#include <math.h>

int main() {
  int num, rem, sum = 0, i;
  num = 28;
  i = 1;
  do {
    rem = num % i;
    if (rem == 0) {
      sum = sum + i;
    }
    i++;
  } while (i < num);
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