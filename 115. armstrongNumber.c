/*
find the armstrong number or not
*/

#include <stdio.h>

#include <math.h>

void armstrong(int number) {
  int saveNumber = number;
  int total = 0;
  while (number > 0) {
    total += pow((number % 10), 3);
    number /= 10;
  }
  if (total == saveNumber) {
    printf("\n%d : armstrong number", saveNumber);
  } else {
    printf("\n%d : not armstrong number", saveNumber);
  }
}

int main() {
  armstrong(153);
  armstrong(371);
  armstrong(5);
  return 0;
}

/*
output

153 : armstrong number

371 : armstrong number

5 : not armstrong number

*/