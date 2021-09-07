/*
subtraction of a 3 X 3 matrix
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[3][3] = {
    {
      1,
      1,
      1
    },
    {
      1,
      1,
      1
    },
    {
      1,
      1,
      1
    }
  };
  int b[3][3] = {
    {
      2,
      2,
      2
    },
    {
      2,
      2,
      2
    },
    {
      2,
      2,
      2
    }
  };
  int i, j;
  printf("matrix A\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("matrix B\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  printf("Subtraction\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", a[i][j] - b[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*
output

matrix A
1 1 1 
1 1 1 
1 1 1 
matrix B
2 2 2 
2 2 2 
2 2 2 
Subtraction
-1 -1 -1 
-1 -1 -1 
-1 -1 -1 
*/