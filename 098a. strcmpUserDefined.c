/*
string comparision
*/

#include <stdio.h>

#include <string.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int strcmp_user_defined(char * str1, char * str2) {
  int cmp = 0;
  int max_len = max(strlen(str1), strlen(str2));
  int i;
  for (i = 0; i < max_len; i++) {
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
  printf("\npre defined comparision of %s and %s = %d", str1, str2, strcmp(str1, str2));
  printf("\npre defined comparision of %s and %s = %d", str1, str3, strcmp(str1, str3));
  printf("\npre defined comparision of %s and %s = %d", str1, str4, strcmp(str1, str4));
  printf("\nuser defined comparision of %s and %s = %d", str1, str2, strcmp_user_defined(str1, str2));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strcmp_user_defined(str1, str3));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strcmp_user_defined(str1, str4));
}

/*
output

pre defined comparision of hello and hello = 0
pre defined comparision of hello and hello1 = -49
pre defined comparision of hello and hell = 111
user defined comparision of hello and hello = 0
user defined comparision of hello and hello1 = -49
user defined comparision of hello and hello1 = 111
*/