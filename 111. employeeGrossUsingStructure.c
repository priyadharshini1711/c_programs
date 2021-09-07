/*
Employee gross using structure
*/

#include <stdio.h>

struct Employee {
  char name[10];
  int employeeNumber;
  float hra;
  float lta;
  float basic;
  int lop;
  float salary
};

int main() {
  struct Employee employee;
  printf("enter details of employee");
  printf("\nenter employee name : ");
  scanf("%s", & employee.name);
  printf("\nenter employee number : ");
  scanf("%d", & employee.employeeNumber);
  printf("\nenter hra : ");
  scanf("%f", & employee.hra);
  printf("\nenter lta : ");
  scanf("%f", & employee.lta);
  printf("\nenter basic salary : ");
  scanf("%f", & employee.basic);
  printf("\nenter lop days : ");
  scanf("%d", & employee.lop);

  float lop = employee.lop * (employee.basic / 30);
  employee.salary = (employee.basic + employee.hra + employee.lta) - lop;

  printf("\nemployee name : %s", employee.name);
  printf("\nemployee number : %d", employee.employeeNumber);
  printf("\nhra : %.2f", employee.hra);
  printf("\nhralta : %.2f", employee.lta);
  printf("\nbasic : %.2f", employee.basic);
  printf("\nlop days :  %d", employee.lop);
  printf("\nlop deduction : %.2f", lop);
  printf("\nsalary : %.2f", employee.salary);
  return 0;
}

/*
output

enter details of employee

enter employee name : a



enter employee number : 1



enter hra : 4500



enter lta : 2500



enter basic salary : 15000



enter lop days : 2



employee name : a

employee number : 1

hra : 4500.00

hralta : 2500.00

basic : 15000.00

lop days :  2

lop deduction : 1000.00

salary : 21000.00

*/