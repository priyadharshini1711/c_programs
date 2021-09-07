/*
number of digits in a number 
*/
#include <stdio.h>

int main() {
  int num;
  int count = 0;
  printf("enter a number ");
  scanf("%d", & num);
  while (num > 0) {
    count += 1;
    num /= 10;
  }
  printf("count of digits = %d", count);
  return 0;
}

/*
output:

enter a number 503
count of digits = 3
*/