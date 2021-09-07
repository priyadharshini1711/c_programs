/*
arithmetic operation using operands
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
  printf("choose a option \n1. + \n2. - \n3. * \n4. / \n5. %%");
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
1. + 
2. - 
3. * 
4. / 
5. %
2
Difference = 10
*/