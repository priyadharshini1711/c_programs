/*
string with 5 characters
*/

#include <stdio.h>

#include <string.h>

int main() {
  char str[5][10];
  int i;
  printf("enter 5 words\n");
  for (i = 0; i < 5; i++) {
    scanf("\n%s", str[i]);
    str[i][5] = '\0';
  }
  printf("\nentered 5 letter words are\n");
  for (i = 0; i < 5; i++) {
    printf("\n%s", str[i]);
  }
  return 0;
}

/*
output

enter 5 words
hey
hi
sample
newyork
samplespcae

entered 5 letter words are

hey
hi
sampl
newyo
sampl
*/