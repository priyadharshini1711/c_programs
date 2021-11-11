/*
minor diagonal of a 3 X 3 matrix
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[3][3];
  printf("enter a 3 x 3 matrix\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("\n%d", & a[i][j]);
    }
  }
  printf("minor diagonal of 3 x 3 matrix is \n");
  for (int i = 0; i < 3; i++) {
    printf("%d\n", a[i][3 - i - 1]);
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
minor diagonal of 3 x 3 matrix is 
3
5
7
*/