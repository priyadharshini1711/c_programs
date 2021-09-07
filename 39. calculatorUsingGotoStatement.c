/*
basic calculator in goto statement
*/
#include <stdio.h>

int main() {
  int option;
  int a;
  int b;
  printf("enter the value of a ");
  scanf("%d", & a);
  printf("enter the value of b ");
  scanf("%d", & b);
  printf("choose the options\n1. Addition \n2. Subtract \n3. Multiply \n4. Divide \n5. Modulus ");
  scanf("%d", & option);
  if (option == 1)
    goto addition;
  else if (option == 2)
    goto subtract;
  else if (option == 3)
    goto multiply;
  else if (option == 4)
    goto divide;
  else if (option == 5)
    goto modulus;

  addition:
    printf("\nsum = %d", a + b);
  subtract:
    printf("\ndifference = %d", a - b);
  multiply:
    printf("\nmultiply = %d", a * b);
  divide:
    printf("\ndivide = %d", a / b);
  modulus:
    printf("\nmodulus = %d", a % b);
  return 0;
}

/*
output:

enter the value of a 10
enter the value of b 20
choose the options
1. Addition 
2. Subtract 
3. Multiply 
4. Divide 
5. Modulus 5
modulus = 10


*/