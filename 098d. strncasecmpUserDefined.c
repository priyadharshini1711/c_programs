/*
string comparision uing n variable
*/

#include <stdio.h>

#include <string.h>


int strncasecmp_user_defined(char * str1, char * str2, int n) {
  int cmp = 0;
  int i;
  for (i = 0; i < n; i++) {
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
  int n = 5;
  printf("\npre defined comparision of %s and %s = %d", str1, str2, strncasecmp(str1, str2, n));
  printf("\npre defined comparision of %s and %s = %d", str1, str3, strncasecmp(str1, str3, n));
  printf("\npre defined comparision of %s and %s = %d", str1, str4, strncasecmp(str1, str4, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str2, strncasecmp_user_defined(str1, str2, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strncasecmp_user_defined(str1, str3, n));
  printf("\nuser defined comparision of %s and %s = %d", str1, str3, strncasecmp_user_defined(str1, str4, n));
}

/*
output

pre defined comparision of hello and HellO = 0
pre defined comparision of hello and HelloO = 0
pre defined comparision of hello and Hell = 111
user defined comparision of hello and HellO = 0
user defined comparision of hello and HelloO = 0
user defined comparision of hello and HelloO = 111
*/