/*
string reverse without using predefined colors
*/

#include<stdio.h>

int main() {
  char s[6] = "hello\0", r[6];
  int begin, end, count = 0;

  while (s[count] != '\0')
    count++;

  end = count - 1;

  for (begin = 0; begin < count; begin++) {
    r[begin] = s[end];
    end--;
  }

  r[begin] = '\0';
  printf("string 1 = %s", s);
  printf("\nstring 2 = %s", r);
  return 0;
}

/*
output

string 1 = hello

string 2 = olleh
*/