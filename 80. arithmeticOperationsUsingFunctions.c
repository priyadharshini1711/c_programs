/*
arithmetic operation using functions
*/

#include <stdio.h>

void add(int a, int b) {
  printf("Sum = %d", a + b);
}

void difference(int a, int b) {
  printf("Difference = %d", a - b);
}

void multiplication(int a, int b) {
  printf("product = %d", a * b);
}

void division(int a, int b) {
  printf("division = %d", a / b);
}

void modulo(int a, int b) {
  printf("modulo = %d", a % b);
}

int main() {
  int choose;
  printf("choose a option \n1. add \n2. difference \n3. multiplication \n4. division \n5. modulo");
  scanf("\n%d", & choose);
  switch (choose) {
  case 1:
    add(20, 10);
    break;
  case 2:
    difference(20, 10);
    break;
  case 3:
    multiplication(20, 10);
    break;
  case 4:
    division(20, 10);
    break;
  case 5:
    modulo(20, 10);
    break;
  }
  return 0;
}

/*
output

choose a option 
1. add 
2. difference 
3. multiplication 
4. division 
5. modulo
3
product = 200
*/