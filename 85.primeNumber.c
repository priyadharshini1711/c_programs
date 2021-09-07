/*
check whether the given number is prime or not
*/

#include <stdio.h>

#include <math.h>

int main() {
  int n;
  printf("enter a number");
  scanf("%d", & n);
  int i;
  if (n == 1) {
    printf("neither prime nor composite");
    return 0;
  } else {
    for (i = 2; i <= sqrt(n / 2); i++) {
      if (n % i == 0) {
        printf("not prime number");
        return 0;
      }
    }
    printf("prime number");
  }
  return 0;
}

/*
output1

enter a number
10
not prime number

output2

enter a number
5
prime number

output3
enter a number
2
prime number
*/