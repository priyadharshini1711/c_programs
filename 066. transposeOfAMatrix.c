/*
transponse of a 3 X 3 matrix
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[3][3];
  int b[3][3];
  int i, j;
  printf("enter a 3 x 3 matrix\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("\n%d", & a[i][j]);
    }
  }
  printf("transpose of 3 x 3 matrix is \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      b[i][j] = a[j][i];
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*
output

enter a 3 x 3 matrix
1
2
3
4
5
6
7
8
9
transpose of 3 x 3 matrix is 
1 4 7 
2 5 8 
3 6 9 
*/