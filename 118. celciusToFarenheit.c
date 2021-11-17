/*
celcius to farenheit
*/

#include <stdio.h>

#include <math.h>

int main() {
  float celcius;
  printf("enter the celcius");
  scanf("%f", & celcius);
  float farenheit = ((celcius * 9) / 5) + 32;
  printf("farenheit = %f", farenheit);
  return 0;
}

/*
output
enter the celcius
45
farenheit = 113.000000
*/