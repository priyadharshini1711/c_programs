/*
string copy using pointers
*/
#include<stdio.h>

void copystr(char * dest, char * src) {
  while ( * src != '\0') {
    * dest = * src;
    * dest++;
    * src++;
  }

  * dest = '\0';
  return;
}

int main() {
  char * str1 = "hello";
  char str2[5];
  copystr(str2, str1);
  printf("string 1 = %s", str1);
  printf("\nstring 2 = %s", str2);
  return 0;
}

/*
output

string 1 = hello

string 2 = hello
*/