/*
increment and decrement using switch case and functions
*/

#include <stdio.h>

void increment (int a)
{
  printf ("\nincrement = %d", ++a);
}

void decrement (int a)
{
  printf ("\ndecrement = %d", --a);
}

int main()
{
  int a = 10;
  int choose;
  printf ("\nvalue = %d", a);
  printf ("\nchoose the options \n1. increment \n2. decrement");
  scanf ("%d", &choose);
  switch (choose)
    {
    case 1:
      increment (a);
      break;
    case 2:
      decrement (a);
      break;
    }
  return 0;
}

/*
output1

value = 10
choose the options 
1. increment 
2. decrement
1
increment = 11


output2
value = 10
choose the options 
1. increment
2. decrement
2
decrement = 9
*/
