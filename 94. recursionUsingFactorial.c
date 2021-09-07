/*
factorial of a number using recursion
*/

#include <stdio.h>

int factorial(int n){
    if (n==0)
        return 1;
    return n * factorial(n - 1);

}

int main()
{
  int n = 5;
  printf("factorial of %d = %d", n , factorial(n));
  return 0;
}

/*
output

factorial of 5 = 120
*/
