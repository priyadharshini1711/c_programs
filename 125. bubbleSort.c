/*
bubble sort
*/

#include <stdio.h>


int main() {
  int a[10] = {
    2,
    4,
    5,
    6,
    7,
    1,
    3,
    8,
    10,
    9
  };
  int flag = 0;
  int i, temp;
  while (flag != 1) {
    flag = 1;
    for (i = 1; i < 10; i++) {
      if (a[i] < a[i - 1]) {
        temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        flag = 0;
      }
    }
  }
  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

/*
ouput 

1 2 3 4 5 6 7 8 9 10 
*/