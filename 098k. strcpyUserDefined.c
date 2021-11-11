/*
strcpy
*/

#include <stdio.h>

#include <string.h>

#include <sys/cdefs.h>

int main() {
  char str1[] = "hello";
  char str2[100];
  int i = 0;
  while (str1[i] != '\0') {
    str2[i] = str1[i];
    i++;
  }
  str2[i] = '\0';
  char str3[100];
  printf("pre defined strcpy of %s is %s", str1, strcpy(str3, str1));
  printf("\nuser defined strcpy of %s is %s", str1, str2);
  return 0;
}

/*
output

pre defined strcpy of hello is hello
user defined strcpy of hello is hello
*/