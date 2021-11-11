/*
declaration and initialisation of an String
*/

#include <stdio.h>

int main() {
  char a[5] = "hello";
  char b[10] = "hey world!";
  printf("declaration and initialisation of a string\n");
  printf("%s\n", a);
  printf("%s\n", b);
  return 0;
}

/*
output:

declaration and initialisation of a string
hellohey world!
hey world!
*/