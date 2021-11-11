/*
print hello and good morning using switch case
*/
#include <stdio.h>

int main() {
  char ch;
  printf("enter the option to print \n1. Hello - h \n2. Good morning - l ");
  scanf("%c", & ch);
  switch (ch) {
  case 'h':
    printf("\nHello");
    break;
  case 'l':
    printf("\nGood Morning");
    break;
  }
  return 0;
}

/*
output:

enter the option to print 
1. Hello - h 
2. Good morning - l h
Hello
*/