/*
strlen
*/

#include <stdio.h>

#include <string.h>

int main() {
  char str1[] = "hello";
  int i = 0;
  while (str1[i] != '\0') {
    i++;
  }
  printf("pre defined strlen of %s is %d", str1, strlen(str1));
  printf("\nuser defined strlen of %s is %d", str1, i);
  return 0;
}

/*
output

pre defined strlen of hello is 5
user defined strlen of hello is 5
*/