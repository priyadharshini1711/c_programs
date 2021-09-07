/*
palindrome of a string without predefined functions
*/

#include <stdio.h>

#include <string.h>

void palindrome(char str1[], char str2[]) {
  int flag = 0;
  int i, j;
  j = strlen(str2) - 1;

  for (i = 0; i < strlen(str1); i++, j--) {
    if (str1[i] != str2[j]) {
      printf("\nnot a palindrome");
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("\npalindrome");
}

int main() {
  palindrome("malayalam", "malayalam");
  palindrome("madam", "madam");
  palindrome("hi", "hi");
  return 0;
}

/*
output:

palindrome
palindrome
not a palindrome
*/