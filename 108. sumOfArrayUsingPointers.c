/*
sum of array using pointers
*/

#include <stdio.h>

int main() {
  int sum = 0;
  int arr[5] = {
    1,
    2,
    3,
    4,
    5
  };
  int i;
  printf("array elements :\n");
  for (i = 0; i < 5; i++) {
    printf("\n%d", *(arr + i));
    sum += * (arr + i);
  }
  printf("\nsum of array elements : %d", sum);

  return 0;
}

/*
output

array elements :

1

2

3

4

5

sum of array elements : 15

*/