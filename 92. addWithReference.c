/*
add with reference
*/

#include <stdio.h>

void
add (int *a, int *b, int *sum)
{
  *sum = *a + *b;
}

int
main ()
{
  int a = 10;
  int b = 20;
  int sum = 0;
  add (&a, &b, &sum);
  printf ("sum = %d", sum);
  return 0;
}

/*
output

sum = 30
*/
