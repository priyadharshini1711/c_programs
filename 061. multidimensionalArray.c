/*
multidimensional matrix
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[2][2] = {
    {
      1,
      2
    },
    {
      3,
      4
    }
  };
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/*
output

1 2 
3 4 
*/