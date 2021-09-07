/*
smallest of array elements
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
  int min = INT_MAX;
  int i;
  printf("array elements = \n");
  for (i = 0; i < 5; i++) {
    if (a[i] < min)
      min = a[i];
    printf("%d ", a[i]);
  }

  printf("\nMin element is = %d", min);

  return 0;
}

/*
output:

array elements = 
1 2 3 4 5 
Min element is = 1
*/