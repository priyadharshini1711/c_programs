/*
telephone bill using structure
*/

#include <stdio.h>

struct TelephoneBill {
  char name[10];
  int phoneNumber;
  int hours;
  int minutes;
  float bill;
};
int main() {
  struct TelephoneBill telephoneBill;
  float tarrif = 0.25;
  printf("enter details");
  printf("\nenter name : ");
  scanf("%s", & telephoneBill.name);
  printf("\nenter phone number : ");
  scanf("%d", & telephoneBill.phoneNumber);
  printf("\nenter hours : ");
  scanf("%d", & telephoneBill.hours);
  printf("\nenter name : ");
  scanf("%d", & telephoneBill.minutes);
  telephoneBill.bill = ((telephoneBill.hours * 60) + telephoneBill.minutes) * tarrif;
  printf("\nbill :  %.2f", telephoneBill.bill);

  return 0;
}

/*
output
enter details

enter name : a



enter phone number : 12345678



enter hours : 2



enter name : 58



bill :  44.50
*/