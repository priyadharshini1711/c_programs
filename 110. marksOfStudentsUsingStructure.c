/*
marks if students using structure
*/

#include <stdio.h>

struct Student {
  char name[10];
  int rollNumber;
  int maths;
  int physics;
  int chemistry;
  int marks
};

int main() {
  struct Student s[3];
  printf("enter details of students");
  int i;
  for (i = 0; i < 3; i++) {
    printf("\nenter name : ");
    scanf("\n%s", & s[i].name);
    printf("\nenter roll number : ");
    scanf("\n%d", & s[i].rollNumber);
    printf("\nenter maths marks : ");
    scanf("\n%d", & s[i].maths);
    printf("\nenter physics amrks : ");
    scanf("\n%d", & s[i].physics);
    printf("\nenter chemistry marks : ");
    scanf("\n%d", & s[i].chemistry);
    s[i].marks = s[i].maths + s[i].physics + s[i].chemistry;
  }

  for (i = 0; i < 3; i++) {
    printf("\nname : %s", s[i].name);
    printf("\nroll number : %d", s[i].rollNumber);
    printf("\nmaths : %d", s[i].maths);
    printf("\nphysics : %d", s[i].physics);
    printf("\nchemistry : %d", s[i].chemistry);
    printf("\nmarks : %d", s[i].marks);
  }
  return 0;
}

/*
output

enter details of students

enter name : a



enter roll number : 1



enter maths marks : 98



enter physics amrks : 98



enter chemistry marks : 98



enter name : b



enter roll number : 2



enter maths marks : 65



enter physics amrks : 64



enter chemistry marks : 68



enter name : c



enter roll number : 3



enter maths marks : 78



enter physics amrks : 85



enter chemistry marks : 89



name : a

roll number : 1

maths : 98

physics : 98

chemistry : 98

marks : 294

name : b

roll number : 2

maths : 65

physics : 64

chemistry : 68

marks : 197

name : c

roll number : 3

maths : 78

physics : 85

chemistry : 89

marks : 252
*/