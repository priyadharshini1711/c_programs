/*
roots of quadratic equation
*/

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  printf("enter the coefficients");
  scanf("%f %f %f", & a, & b, & c);
  int d;
  float x1, x2;
  d = (b * b) - (4 * a * c);
  if (d >= 0) {
    x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
    printf("roots are %f and %f", x1, x2);
  } else {
    x1 = -b / (2 * a);
    x2 = sqrt(-d) / (2 * a);
    printf("roots are %f + i%f and %f - i%f", x1, x2, x1, x2);
  }
  return 0;
}

/*
output1
enter the coefficients
1
1
1
roots are -0.500000 + i0.866025 and -0.500000 - i0.866025

output2
enter the coefficients
5
6
1
roots are -1.000000 and -0.200000
*/