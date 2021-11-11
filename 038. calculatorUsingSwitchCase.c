/*
calculator program using switch case
*/

#include <stdio.h>

int main() {
  int a;
  int b;
  printf("\nenter the value of a ");
  scanf("%d", & a);
  printf("\nenter the value of b ");
  scanf("%d", & b);
  int choose;
  printf("\nchoose the operation\n1. Add \n2.Subtract \n3.Multiply \n4. Divide \n5. Modulous ");
  scanf("%d", & choose);
  switch (choose) {
  case 1:
    printf("Sum = %d", a + b);
    break;
  case 2:
    printf("Difference = %d", a - b);
    break;
  case 3:
    printf("Multiply = %d", a * b);
    break;
  case 4:
    printf("Division = %d", a / b);
    break;
  case 5:
    printf("Modulous = %d", a % b);
    break;
  }

  return 0;
}

/*
output:


enter the value of a 10

enter the value of b 20

choose the operation
1. Add 
2.Subtract 
3.Multiply 
4. Divide 
5. Modulous 2
Difference = -10
*/