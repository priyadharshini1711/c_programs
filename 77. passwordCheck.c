/*
check password if admin
*/

#include <stdio.h>

#include <string.h>

int main() {
  char a[10];
  printf("enter the password\n");
  scanf("%s", & a);
  if (strcmp("admin", a) == 0) {
    printf("password match");
  } else {
    printf("password does not match");
  }
  return 0;
}

/*
output1

enter the password
admin
password match

output2

enter the password
admin1
password does not match
*/