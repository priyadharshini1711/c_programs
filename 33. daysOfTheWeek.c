/*
days of the week using switch case 
*/
#include <stdio.h>

int main() {
  int day = 3;
  printf("the selected week day is ");
  switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  }
  return 0;
}

/*
output:

the selected week day is Wednesday
*/