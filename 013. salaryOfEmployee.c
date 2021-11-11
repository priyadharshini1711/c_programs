/*
calculate salary of an employee
*/

#include <stdio.h>

int main() {
  int sal = 10000, lop = 3;
  int daily_wages = sal / 30;
  int salary = sal - (lop * daily_wages);
  printf("\nsalary = %d",sal);
  printf("\nlop = %d",lop);
  printf("\ndaily_wages = %d",daily_wages);
  printf("\nsalary = %d",salary);
    return 0;
}

/*
output:

salary = 10000
lop = 3
daily_wages = 333
salary = 9001

*/
