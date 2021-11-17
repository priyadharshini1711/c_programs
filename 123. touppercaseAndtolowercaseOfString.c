/*
lowercase to upper case
uppercase to lower case
*/

#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main() {
  char str1[100] = "HeLLo";
  char str2[100];
  for (int i = 0; i < strlen(str1); i++) {
    str1[i] = toupper(str1[i]);
    str2[i] = tolower(str1[i]);
  }
  printf("to upper case is = %s", str1);
  printf("\nto lower case is = %s", str2);
  return 0;
}

/*
ouput
to upper case is = HELLO
to lower case is = hello
*/