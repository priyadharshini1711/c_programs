/*
selection sort in c
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[5] = {
    3,
    2,
    1,
    4,
    5
  };
  int i;
  int temp;
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (a[i] < a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i = 0; i < 5; i++)
    printf("\n%d", a[i]);
  return 0;
}

/*
output

5
4
3
2
1
*/