/*
string comparision uing n variable
*/

#include <stdio.h>

#include <string.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int strncmp_user_defined(char * str1, char * str2, int n) {
  int cmp = 0;
  int i;
  for (i = 0; i < n; i++) {
    if (str1[i] != str2[i])
      return str1[i] - str2[i];
  }
  return cmp;
}

int main() {
  char * str1 = "hello";
  char * str2 = "hello";
  char * str3 = "hello1";
  char * str4 = "hell";
  int n = 5;
  printf("\npre defined comparision of %s and %s = %d", str1, str2, strncmp(str1, str2, n));
  printf("\npre defined comparision of %s and %s = %d", str1, str3, strncmp(str1, str3, n));
  printf("\npre defined comparision of %s and %s = %d", str1, str4, strncmp(str1, str4, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str2, strncmp_user_defined(str1, str2, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strncmp_user_defined(str1, str3, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strncmp_user_defined(str1, str4, n));
}

/*
output

pre defined comparision of hello and hello = 0
pre defined comparision of hello and hello1 = 0
pre defined comparision of hello and hell = 111
user defined comparision of hello and hello = 0
user defined comparision of hello and hello1 = 0
user defined comparision of hello and hello1 = 111
*/