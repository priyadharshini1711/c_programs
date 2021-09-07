/*
greatest of array elements
*/
#include <stdio.h>

#include <limits.h>


int main() {
  int a[5] = {
    1,
    2,
    3,
    4,
    5
  };
  int max = INT_MIN;
  int i;
  printf("array elements = \n");
  for (i = 0; i < 5; i++) {
    if (a[i] > max)
      max = a[i];
    printf("%d ", a[i]);
  }

  printf("\nMax element is = %d", max);

  return 0;
}

/*
output:

array elements = 
1 2 3 4 5 
Max element is = 5
*/