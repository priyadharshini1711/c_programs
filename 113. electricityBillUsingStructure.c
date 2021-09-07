/*
electricity bill using structure
*/

#include <stdio.h>


struct ElectricityBill {
  char name[10];
  int ebNumber;
  int units;
  float bill;

};

int main() {
  struct ElectricityBill electricityBill;

  printf("enter the details");
  printf("\nenter the name : ");
  scanf("%s", & electricityBill.name);
  printf("\nenter the eb number : ");
  scanf("%d", & electricityBill.ebNumber);
  printf("\nenter the units : ");
  scanf("%d", & electricityBill.units);
  float price = 0;
  int units = 0;

  if (electricityBill.units <= 100) {
    electricityBill.bill = price;
  } else if (electricityBill.units <= 200) {
    units = electricityBill.units - 100;
    price += units * 1.5;
    electricityBill.bill = price;
  } else if (electricityBill.units <= 500) {
    units = electricityBill.units - 200;
    price += 100 * 2;
    price += units * 3;
    electricityBill.bill = price;
  } else if (electricityBill.units > 500) {
    units = electricityBill.units - 500;
    price += 100 * 3.5;
    price += 300 * 4.6;
    price += units * 6.6;
  }

  printf("\nprice : %.2f", price);
  return 0;
}

/*
output

enter the details
enter the name : a
enter the eb number : 1
enter the units : 510
price : 1796.00
*/