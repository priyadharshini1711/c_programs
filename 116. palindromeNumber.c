/*
find the palindrome number or not
*/

#include <stdio.h>

#include <math.h>

void palindrome(int number) {
  int saveNumber = number;
  int reverse = 0;
  while (number > 0) {
    reverse = (reverse * 10) + (number % 10);
    number /= 10;
  }
  if (reverse == saveNumber) {
    printf("\n%d : palindrome number", saveNumber);
  } else {
    printf("\n%d : not palindrome number", saveNumber);
  }
}

int main() {
  palindrome(121);
  palindrome(371);
  palindrome(55);
  return 0;
}

/*
output

121 : palindrome number

371 : not palindrome number

55 : palindrome number
*/