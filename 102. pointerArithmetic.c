/*
pointers arithmetic
*/

#include <stdio.h>

#include <string.h>

int main() {

  int number = 50;
  int * p;
  p = & number;
  printf("Address of p variable is %u \n", p);
  p = p + 1;
  printf("After increment: Address of p variable is %u \n", p);

  p = p - 1;
  printf("After increment: Address of p variable is %u \n", p);

  p = p + 3;
  printf("After addition: Address of p variable is %u \n", p);

  p = p - 3;
  printf("After subtraction: Address of p variable is %u \n", p);

  int * ptrA, * ptrB;

  ptrA = (int * ) 1;
  ptrB = (int * ) 2;

  if (ptrA > ptrB)
    printf("PtrB is greater than ptrA");
  else
    printf("PtrA is greater than ptrB");

  return 0;
}

/*
output:

Address of p variable is 1999176980 

After increment: Address of p variable is 1999176984 

After increment: Address of p variable is 1999176980 

After addition: Address of p variable is 1999176992 

After subtraction: Address of p variable is 1999176980 

PtrA is greater than ptrB

*/