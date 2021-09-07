/*
get and print array
*/
#include <stdio.h>

int main() {
  int n;
  printf("enter the size of the array ");
  scanf("%d", & n);
  int a[n];
  int i;
  printf("\nenter %d numbers ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", & a[i]);
  }
  printf("\nnumbers entered");
  for (i = 0; i < n; i++) {
    printf("\n%d", a[i]);
  }
  return 0;
}

/*
output:

enter the size of the array 3
enter 3 numbers 12
21
15

numbers entered
12
21
15
*/