/*
string concatenation
*/

#include <stdio.h>

#include <string.h>

void strcat_user_defined(char * str1, char * str2) {
  char str3[100];
  int i = 0, j = 0;
  while (str1[j] != '\0') {
    str3[i] = str1[j];
    j++;
    i++;
  }
  j = 0;
  while (str2[j] != '\0') {
    str3[i] = str2[j];
    j++;
    i++;
  }
  str3[i] = '\0';
  printf("\nuser defined concatenation of %s and %s = %s", str1, str2, str3);
}

int main() {
  char str1[] = "hello";
  char str2[] = "everyone";
  strcat_user_defined(str1, str2);
  printf("\npre defined concatenation of %s and %s = ", str1, str2);
  strcat(str1, str2);
  printf("%s", str1);

  return 0;
}

/*
output


user defined concatenation of hello and everyone = helloeveryone
pre defined concatenation of hello and everyone = helloeveryone
*/