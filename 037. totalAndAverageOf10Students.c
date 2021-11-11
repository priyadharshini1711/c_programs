/*
total and average of one student
*/
#include <stdio.h>

int main() {
  int n;
  printf("enter the number of students\n");
  scanf("%d", & n);
  for (int i = 0; i < n; i++) {
    printf("\nenter the student %d  details", i + 1);

    int mark1, mark2, mark3;
    printf("\nenter mark1 ");
    scanf("%d", & mark1);
    printf("enter mark2 ");
    scanf("%d", & mark2);
    printf("enter mark3 ");
    scanf("%d", & mark3);
    int total = mark1 + mark2 + mark3;
    printf("total of 3 marks = %d", total);
    int avg = total / 3;
    printf("\naverage of 3 marks = %d", avg);
  }
  return 0;
}

/*
output:

enter the number of students
3

enter the student 1  details
enter mark1 98
enter mark2 97
enter mark3 96
total of 3 marks = 291
average of 3 marks = 97
enter the student 2  details
enter mark1 87
enter mark2 88
enter mark3 89
total of 3 marks = 264
average of 3 marks = 88
enter the student 3  details
enter mark1 67
enter mark2 68
enter mark3 69
total of 3 marks = 204
average of 3 marks = 68
*/