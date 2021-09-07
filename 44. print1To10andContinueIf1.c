/*
print 1-10 and continue if 1
*/
#include <stdio.h>

int main() {
  int n = 10;
  for (int i = 0; i < n; i++) {
    if (i == 1) {
      printf("\nskipping and continuing");
      continue;
    }
    printf("\n%d", i);
  }
  return 0;
}

/*
output:

0
skipping and continuing
2
3
4
5
6
7
8
9
*/