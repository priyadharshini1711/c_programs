/*
check highest salary among 10 employess
*/
#include <stdio.h>

int main() {
  int max_salary = 0;
  int n = 10;
  for (int i = 0; i < n; i++) {
    printf("enter salary of employee %d ", i + 1);
    int salary;
    scanf("%d", & salary);
    if (max_salary < salary)
      max_salary = salary;
  }
  printf("the maximum salary is %d", max_salary);
  return 0;
}

/*
output:

enter salary of employee 1 1
enter salary of employee 2 20
enter salary of employee 3 50
enter salary of employee 4 78
enter salary of employee 5 45
enter salary of employee 6 78
enter salary of employee 7 45
enter salary of employee 8 98
enter salary of employee 9 12
enter salary of employee 10 12
the maximum salary is 98 
*/