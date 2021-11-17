/*
1. compute even
2. compute odd
*/

#include <stdio.h>

#include <math.h>

int fact(int x) {
  int f = 1;
  while (x > 1) {
    f *= x;
    --x;
  }
  return f;
}

void compute_even(double x, int n) {
  int i;
  double res = 0.0;
  int even = 2;
  double sum = 1.0;
  for (i = 2; i <= n; i++) {
    res = (pow(x, even) / fact(even));
    if (i % 2 == 0) {
      sum = sum - res;
    } else {
      sum = sum + res;
    }
    even += 2;
  }
  printf("\nvalue even = %lf", sum);
}

void compute_odd(double x, int n) {
  int i;
  double res = 0.0;
  int odd = 3;
  double sum = -1 * x;
  for (i = 2; i <= n; i++) {
    res = (pow(x, odd) / fact(odd));
    if (i % 2 == 0) {
      sum = sum - res;
    } else {
      sum = sum + res;
    }
    odd += 2;
  }
  printf("\nvalue odd = %lf", sum);
}

int main() {
  compute_even(1, 2);
  compute_odd(0.2, 1);
  return 0;
}

/*
output1:

value even = 0.500000
value odd = -0.200000
*/