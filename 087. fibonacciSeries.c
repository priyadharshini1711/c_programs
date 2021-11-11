/*
fibonacci series
*/
#include <stdio.h>

int main() {
  int a = -1;
  int b = 1;
  int fib = 0;
  int n;
  printf("enter the number of series");
  scanf("\n%d", & n);
  for (int i = 0; i < n; i++) {
    int sum = a + b;
    a = b;
    b = sum;
    printf("\nterm %d = %d ", i + 1, sum);
  }

  return 0;
}

/*
output:

enter the number of series
5

term 1 = 0 
term 2 = 1 
term 3 = 1 
term 4 = 2 
term 5 = 3
*/