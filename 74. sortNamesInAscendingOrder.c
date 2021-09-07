/*
sort names in ascending order
*/
#include <stdio.h>

#include <string.h>

int main() {
  char a[5][10] = {
    "priya",
    "dharshini",
    "thomas",
    "kennedy",
    "harris"
  };
  char temp[10];
  int i, j;
  printf("names in random order");
  for (i = 0; i < 5; i++) {
    printf("\n%s", a[i]);
  }
  for (i = 0; i < 4; i++) {
    for (j = i + 1; j < 5; j++) {
      if (strcmp(a[i], a[j]) > 0) {
        strcpy(temp, a[i]);
        strcpy(a[i], a[j]);
        strcpy(a[j], temp);
      }
    }
  }
  printf("\n\nnames in ascending order");
  for (i = 0; i < 5; i++) {
    printf("\n%s", a[i]);
  }
  return 0;
}

/*
output:

names in random order
priya
dharshini
thomas
kennedy
harris

names in ascending order
dharshini
harris
kennedy
priya
thomas
*/