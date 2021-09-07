/*
arithmetic operation using operands with return
*/

#include <stdio.h>

int add(int a, int b) {
  return a + b;
}
int difference(int a, int b) {
  return a - b;
}

int multiplication(int a, int b) {
  return a * b;
}

int division(int a, int b) {
  return a / b;
}

int modulo(int a, int b) {
  return a % b;
}

int main() {
  int choose;
  printf("choose a option \n1. + \n2. - \n3. * \n4. / \n5. %%");
  scanf("\n%d", & choose);
  switch (choose) {
  case 1:
    printf("sum = %d", add(20, 10));
    break;
  case 2:
    printf("difference = %d", difference(20, 10));
    break;
  case 3:
    printf("product = %d", multiplication(20, 10));
    break;
  case 4:
    printf("division = %d", division(20, 10));
    break;
  case 5:
    printf("modulo = %d", modulo(20, 10));
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
4
division = 2
*/