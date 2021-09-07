/*
check highest salary among 10 employess
*/
#include <stdio.h>

int main() {
  int max_salary = 0;
  int n = 10;
  int i = 0;
  while (i < n) {
    printf("enter salary of employee %d ", i + 1);
    int salary;
    scanf("%d", & salary);
    if (max_salary < salary)
      max_salary = salary;
    i++;
  }
  printf("the maximum salary is %d", max_salary);
  return 0;
}

/*
output:

enter salary of employee 1 20
enter salary of employee 2 30
enter salary of employee 3 40
enter salary of employee 4 50
enter salary of employee 5 45
enter salary of employee 6 87
enter salary of employee 7 120
enter salary of employee 8 45
enter salary of employee 9 78
enter salary of employee 10 98
the maximum salary is 120
*/