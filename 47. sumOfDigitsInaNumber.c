/*
sum of digits in a number 
*/
#include <stdio.h>

int main() {
  int num;
  int sum = 0;
  printf("enter a number ");
  scanf("%d", & num);
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  printf("sum of digits = %d", sum);
  return 0;
}

/*
output:

enter a number 503
sum of digits = 8
*/