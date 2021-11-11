// Online C compiler to run C program online
#include <stdio.h>

int main() {
  // Write C code here
  int year = 1900;
  if (year % 4 == 0) {
    if (year % 100 != 0 || year % 400 == 0) {
      printf("%d is a leap year", year);
    } else {
      printf("%d is not a leap year", year);
    }
  } else {
    printf("%d is not a leap year", year);
  }
  return 0;
}

/*
output:

1900 is not a leap year
*/