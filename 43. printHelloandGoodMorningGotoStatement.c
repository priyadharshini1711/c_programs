/*
print hello and good morning using goto statement
*/
#include <stdio.h>

int main() {
  char ch;
  printf("enter the option to print \n1. Hello - h \n2. Good morning - l ");
  scanf("%c", & ch);
  switch (ch) {
  case 'h':
    goto hello;
    break;
  case 'l':
    goto good_morning;
    break;
  }
  hello:
    printf("\nHello");
  good_morning:
    printf("\nGood Morning");
  return 0;
}

/*
output:

enter the option to print 
1. Hello - h 
2. Good morning - l l

Good Morning
*/