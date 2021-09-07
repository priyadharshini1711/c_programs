/*
get and display array using functions
*/
#include <stdio.h>

void display(int a[]) {
  int i;
  printf("\nthe entered array is");
  for (i = 0; i < 5; i++) {
    printf("\n%d", a[i]);
  }
}

int main() {
  int a[5];
  int i;
  printf("enter 5 numbers");
  for (i = 0; i < 5; i++) {
    scanf("%d", & a[i]);
  }
  display(a);
  return 0;
}

/*
output:

/*
get and display array using functions
*/
#include <stdio.h>

void display(int a[5]) {
  int i;
  for (i = 0; i < 5; i++) {
    printf("\n%d", a[i]);
  }
}

int main() {
  int a[5];
  int i;
  printf("enter 5 numbers");
  for (i = 0; i < 5; i++) {
    scanf("%d", & a[i]);
  }
  display(a);
  return 0;
}

/*
output:

enter 5 numbers
1
2
3
4
5

the entered array is
1
2
3
4
5
*/
*/