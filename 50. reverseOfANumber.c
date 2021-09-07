/*
reverse of a number
*/
#include <stdio.h>

int main() {
  int num;
  printf("enter the number ");
  scanf("%d", & num);
  int reverse = 0;
  while (num > 0) {
    reverse = (reverse * 10) + (num % 10);
    num /= 10;
  }
  printf("reverse = %d", reverse);
  return 0;
}

/*
output:

enter the number 168
reverse = 861
*/