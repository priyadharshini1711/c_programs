/*
strnstr
*/

#include <stdio.h>

#include <string.h>

#include <sys/cdefs.h>

void strnstr_user_defined(char * str1, char * str2, int n) {
  char str3[100];
  int end = strlen(str1);
  int flag = 0;
  for (int start = 0; start < n; start++) {
    strncpy(str3, str1 + start, strlen(str2));
    if (strcmp(str2, str3) == 0) {
      flag = 1;
      printf("\nuser defined strnstr of %s and %s = %s", str1, str2, str3);
      break;
    }
  }
  if (flag == 0) {
    printf("\nuser defined strnstr of %s and %s = %s", str1, str2, "(null)");
  }
}

int main() {
  char str1[] = "hello world";
  char str2[] = "ello";
  char str4[] = "world";
  int n = 6;
  strnstr_user_defined(str1, str2, n);
  strnstr_user_defined(str1, str4, n);
  return 0;
}

/*
output

user defined strnstr of hello world and ello = (null)
user defined strnstr of hello world and world = (null)
*/