/*
strrev
*/

#include <stdio.h>

#include <string.h>

int main() {
  char str1[] = "hello";
  char str2[100];
  int i = 0, j = strlen(str1) - 1;
  while (str1[j] >= 0) {
    str2[i] = str1[j];
    i++;
    j--;
  }
  str2[i] = '\0';
  printf("pre defined strrev of %s is %s", str1, str2);
  printf("\nuser defined strrev of %s is %s", str1, str2);
  return 0;
}

/*
output

pre defined strrev of hello is olleh
user defined strrev of hello is olleh
*/