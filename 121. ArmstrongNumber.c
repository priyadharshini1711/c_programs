/*
armstrong number
*/

#include <stdio.h>

#include <math.h>

int main() {
  int num = 153;
  int num_copy = num;
  int sum = 0;
  while (num > 0) {
    sum += (num % 10) * (num % 10) * (num % 10);
    num /= 10;
  }
  if (sum == num_copy) {
    printf("%d is armstrong number", num_copy);
  } else {
    printf("%d is not armstrong number", num_copy);
  }
  return 0;
}

/*
output
153 is armstrong number
*/