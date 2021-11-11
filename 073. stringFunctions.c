/*
string functions
*/

#include <stdio.h>

#include <string.h>

int main() {
  char str1[] = "hello";
  char str2[] = "hello";
  char str3[] = "world";
  char str4[] = "HellO";
  char str5 = 'l';
  char str6[] = "ell";
  char str7[100];
  char str8[] = "hello";
  // 1
  printf("pre defined strcmp of %s and %s is %d", str1, str2, strcmp(str1, str2));
  printf("\npre defined strcmp of %s and %s is %d", str1, str3, strcmp(str1, str3));
  // 2
  printf("\npre defined strncmp of %s and %s is %d", str1, str2, strncmp(str1, str3, 5));
  // 3
  printf("\npre defined strcasecmp of %s and %s is %d", str1, str4, strcasecmp(str1, str4));
  // 4
  printf("\npre defined strncasecmp of %s and %s is %d", str1, str4, strncasecmp(str1, str4, 4));
  // 5
  strcat(str1, str3);
  printf("\npre defined strcat of %s and %s is %s", str1, str3, str1);
  // 6
  strncat(str2, str3, 3);
  printf("\npre defined strncat of %s and %s is %s", str2, str3, str2);
  // 7
  printf("\npre defined strchr of %s and %c is %s", str1, str5, strchr(str8, str5));
  // 8
  printf("\npre defined strrchr of %s and %c is %s", str1, str5, strrchr(str8, str5));
  // 9
  printf("\npre defined strstr of %s and %s is %s", str1, str6, strstr(str8, str6));
  // 10
  // printf("\npre defined strnstr of %s and %s is %s", str1, str6, strnstr(str1, str5,8));
  // 11
  strcpy(str7, str8);
  printf("\npre defined strcpy of %s is %s", str1, str7);
  // 12
  strncpy(str7, str8, 4);
  printf("\npre defined strncpy of %s is %s", str1, str7);
  // 13
  printf("\npre defined strlen of %s is %d", str8, strlen(str8));
  // 14
  // printf("\npre defined strrev of %s is %s", str1, strrev(str1));
  return 0;
}

/*
output

pre defined strcmp of hello and hello is 0
pre defined strcmp of hello and world is -15
pre defined strncmp of hello and hello is -15
pre defined strcasecmp of hello and HellO is 0
pre defined strncasecmp of hello and HellO is 0
pre defined strcat of helloworld and world is helloworld
pre defined strncat of orldwor and r is orldwor
pre defined strchr of helloworldwor and l is llo
pre defined strrchr of helloworldwor and l is lo
pre defined strstr of helloworldwor and ell is ello
pre defined strcpy of helloworldwor is hello
pre defined strncpy of helloworldwor is hello
pre defined strlen of hello is 5
*/