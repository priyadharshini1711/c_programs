/*
strstr
*/

#include <stdio.h>

#include <string.h>

void strstr_user_defined(char * str1, char * str2) {
  char str3[100];
  int end = strlen(str1);
  int flag = 0;
  for (int start = 0; start < strlen(str1) - strlen(str2) + 1; start++) {
    strncpy(str3, str1 + start, strlen(str2));
    if (strcmp(str2, str3) == 0) {
      flag = 1;
      printf("\nuser defined strrchr of %s and %s = %s", str1, str2, str3);
      break;
    }
  }
  if (flag == 0) {
    printf("\npre defined strrchr of %s and %s = %s", str1, str2, "(null)");
  }
}

int main() {
  char str1[] = "hello world";
  char str2[] = "world";
  char str4[] = "world1";
  strstr_user_defined(str1, str2);
  printf("\npre defined strrchr of %s and %s = %s", str1, str2, strstr(str1, str2));
  strstr_user_defined(str1, str4);
  printf("\npre defined strrchr of %s and %s = %s", str1, str4, strstr(str1, str4));
  return 0;
}

/*
output

user defined strrchr of hello world and world = world
pre defined strrchr of hello world and world = world
pre defined strrchr of hello world and world1 = (null)
pre defined strrchr of hello world and world1 = (null)
*/