/*
total marks of all students
*/
#include <stdio.h>

int main() {
  int n;
  printf("enter the number of students ");
  scanf("%d", & n);
  int marks;
  int total = 0;
  for (int i = 0; i < n; i++) {
    printf("enter the student %d marks ", i + 1);
    scanf("%d", & marks);
    total += marks;
  }
  printf("total = %d", total);
  return 0;
}

/*
output:

enter the number of students 5
enter the student 1 marks 98
enter the student 2 marks 97
enter the student 3 marks 95
enter the student 4 marks 96
enter the student 5 marks 65
total = 451
*/