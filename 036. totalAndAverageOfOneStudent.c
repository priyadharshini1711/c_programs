/*
total and average of one student
*/
#include <stdio.h>

int main() {
  int mark1, mark2, mark3;
  printf("enter mark1 ");
  scanf("%d", & mark1);
  printf("enter mark2 ");
  scanf("%d", & mark2);
  printf("enter mark3 ");
  scanf("%d", & mark3);
  int total = mark1 + mark2 + mark3;
  printf("\ntotal of 3 marks = %d", total);
  int avg = total / 3;
  printf("\naverage of 3 marks = %d", avg);

  return 0;
}

/*
output:

enter mark1 98
enter mark2 99
enter mark3 95

total of 3 marks = 292
average of 3 marks = 97
*/