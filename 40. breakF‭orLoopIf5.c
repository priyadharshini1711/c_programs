/*
print numbers from 1-10 and break if 5 
*/
#include <stdio.h>

int main() {
  int n = 10;
  for (int i = 0; i < n; i++) {
    if (i == 5) {
      printf("\nskipping and breaking");
      break;
    }
    printf("\n%d", i);
  }
  return 0;
}

/*
output:

0
1
2
3
4
skipping and breaking
*/