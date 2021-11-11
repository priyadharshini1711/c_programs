/*
string comparision uing n variable
*/

#include <stdio.h>

#include <string.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int strcasecmp_user_defined(char * str1, char * str2) {
  int cmp = 0;
  int max_len = max(strlen(str1), strlen(str2));
  int i;
  for (i = 0; i < max_len; i++) {
    if (tolower(str1[i]) != tolower(str2[i]))
      return tolower(str1[i]) - tolower(str2[i]);
  }
  return cmp;
}

int main() {
  char * str1 = "hello";
  char * str2 = "HellO";
  char * str3 = "HelloO";
  char * str4 = "Hell";
  printf("\npre defined comparision of %s and %s = %d", str1, str2, strcasecmp(str1, str2));
  printf("\npre defined comparision of %s and %s = %d", str1, str3, strcasecmp(str1, str3));
  printf("\npre defined comparision of %s and %s = %d", str1, str4, strcasecmp(str1, str4));
  printf("\nuser defined comparision of %s and %s = %d", str1, str2, strcasecmp_user_defined(str1, str2));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strcasecmp_user_defined(str1, str3));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strcasecmp_user_defined(str1, str4));
}

/*
output

pre defined comparision of hello and HellO = 0
pre defined comparision of hello and HelloO = -111
pre defined comparision of hello and Hell = 111
user defined comparision of hello and HellO = 0
user defined comparision of hello and HelloO = -111
user defined comparision of hello and HelloO = 111
*/