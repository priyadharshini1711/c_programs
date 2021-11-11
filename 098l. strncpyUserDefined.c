/*
strncpy
*/

#include <stdio.h>

#include <string.h>

#include <sys/cdefs.h>

int main() {
  char str1[] = "hello";
  char str2[100];
  int n = 3;
  int i = 0;
  while (str1[i] != '\0' && i < n) {
    str2[i] = str1[i];
    i++;
  }
  str2[i] = '\0';
  char str3[100];
  printf("pre defined strncpy of %s is %s", str1, strncpy(str3, str1, n));
  printf("\nuser defined strncpy of %s is %s", str1, str2);
  return 0;
}

/*
output

pre defined strncpy of hello is hel
user defined strncpy of hello is hel
*/