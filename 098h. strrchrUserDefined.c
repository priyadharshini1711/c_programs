/*
strrchr
*/

#include <stdio.h>

#include <string.h>

void strrchr_user_defined(char * str1, char str2) {
  char str3[100];
  int i = strlen(str1) - 1;
  int j = 0;
  while (str1[i] != str2) {
    i--;
  }
  while (str1[i] != '\0') {
    str3[j] = str1[i];
    j++;
    i++;
  }
  str3[i] = '\0';
  printf("\nuser defined strrchr of %s and %c = %s", str1, str2, str3);
}

int main() {
  char str1[] = "hello";
  char str2 = 'l';
  strrchr_user_defined(str1, str2);
  printf("\npre defined strrchr of %s and %c = %s", str1, str2, strrchr(str1, str2));
  return 0;
}

/*
output

user defined strrchr of hello and l = lo
pre defined strrchr of hello and l = lo
*/