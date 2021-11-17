/*
pascal's triangle
*/

#include <stdio.h>

long factorial(int n) {
  int c;
  long result = 1;
  for (c = 1; c <= n; c++)
    result *= c;
  return result;
}

int main() {
  int n = 10;
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= (n - i - 1); j++) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      printf("%ld ", factorial(i) / (factorial(j) * factorial(i - j)));
    }
    printf("\n");
  }
  return 0;
}

/*
ouput1 n=5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1
 
output2 n=10
          1 
         1 1 
        1 2 1 
       1 3 3 1 
      1 4 6 4 1 
     1 5 10 10 5 1 
    1 6 15 20 15 6 1 
   1 7 21 35 35 21 7 1 
  1 8 28 56 70 56 28 8 1 
 1 9 36 84 126 126 84 36 9 1
*/