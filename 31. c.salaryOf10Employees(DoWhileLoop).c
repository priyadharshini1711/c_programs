/*
check highest salary among 10 employess
*/
#include <stdio.h>

int main() {
  int max_salary = 0;
  int n = 10;
  int i = 0;
  do {
    printf("enter salary of employee %d ", i + 1);
    int salary;
    scanf("%d", & salary);
    if (max_salary < salary)
      max_salary = salary;
    i++;
  } while (i < n);
  printf("the maximum salary is %d", max_salary);
  return 0;
}

/*
output:

enter salary of employee 1 10
enter salary of employee 2 20
enter salary of employee 3 45
enter salary of employee 4 120
enter salary of employee 5 5
enter salary of employee 6 78
enter salary of employee 7 45
enter salary of employee 8 85
enter salary of employee 9 4543
enter salary of employee 10 25
the maximum salary is 4543
*/