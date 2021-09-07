/*
get and display a matrix
*/
#include <stdio.h>

#include <math.h>

int main() {
  int a[2][2];
  printf("enter a 2 x 2 matrix\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", & a[i][j]);
    }
  }
  printf("entered 2 x 2 matrix is \n");
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

enter a 2 x 2 matrix
1
2
3
4
entered 2 x 2 matrix is 
1 2 
3 4  
*/