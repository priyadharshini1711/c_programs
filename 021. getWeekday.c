/*
get a number in the week and print the week day by using if else
*/
#include <stdio.h>

int main() {
  int day;
  printf("please enter the number of day of the week\n");
  scanf("%d", & day);
  if (day == 1)
    printf("Monday");
  else if (day == 2)
    printf("Tuesday");
  else if (day == 3)
    printf("Wednesday");
  else if (day == 4)
    printf("Thursday");
  else if (day == 5)
    printf("Friday");
  else if (day == 6)
    printf("Saturday");
  else
    printf("Sunday");
  return 0;
}

/*
output:

please enter the number of day of the week
2
Tuesday
*/
