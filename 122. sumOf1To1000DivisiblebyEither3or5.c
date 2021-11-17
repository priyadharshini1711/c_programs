/*
sum of all from 1-1000 numbers divisible by 3, 5 and not 15
*/

#include <stdio.h>

#include <math.h>

int main() {
  int d_3 = 1000 / 3;
  int d_5 = 1000 / 5;
  int d_15 = 1000 / 15;
  int sum_3 = 3 * (d_3 * (d_3 + 1)) / 2;
  int sum_5 = 5 * (d_5 * (d_5 + 1)) / 2;
  int sum_15 = 15 * (d_15 * (d_15 + 1)) / 2;
  printf("sum of numbers from 1 - 100 divisible by 3 and 5 is = %d", (sum_3 + sum_5) - sum_15 - 1000);
  return 0;
}

/*
output
sum of numbers from 1 - 100 divisible by 3 and 5 is = 233168
*/