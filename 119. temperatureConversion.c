/*
temperature conversion
*/

#include <stdio.h>

#include <math.h>

void celcius_to_fareheit() {
  float celcius;
  printf("enter the celcius");
  scanf("%f", & celcius);
  float farenheit = ((celcius * 9) / 5) + 32;
  printf("farenheit = %f", farenheit);
}

void celcius_to_kelvin() {
  float celcius;
  printf("enter the celcius");
  scanf("%f", & celcius);
  float kelvin = celcius + 273.15;
  printf("kelvin = %f", kelvin);
}

void farenheit_to_celcius() {
  float farenheit;
  printf("enter the farenheit");
  scanf("%f", & farenheit);
  float celcius = ((farenheit - 32) * 5) / 9;
  printf("celcius = %f", celcius);
}

void farenheit_to_kelvin() {
  float farenheit;
  printf("enter the farenheit");
  scanf("%f", & farenheit);
  float kelvin = (farenheit - 32) * 5 / 9 + 273.15;
  printf("kelvin = %f", kelvin);
}

void kelvin_to_celcius() {
  float kelvin;
  printf("enter the kelvin");
  scanf("%f", & kelvin);
  float celcius = kelvin - 273.15;
  printf("celcius = %f", celcius);
}

void kelvin_to_farenheit() {
  float kelvin;
  printf("enter the kelvin");
  scanf("%f", & kelvin);
  float farenheit = (kelvin - 273.15) * 9 / 5 + 32;
  printf("celcius = %f", farenheit);
}

int main() {
  int choose;
  printf("choose \n1. celcius_to_fareheit \n2. celcius_to_kelvin \n3. farenheit_to_celcius \n4. farenheit_to_kelvin \n5. kelvin_to_celcius \n6. kelvin_to_farenheit");
  scanf("\n%d", & choose);
  switch (choose) {
  case 1:
    celcius_to_fareheit();
    break;
  case 2:
    celcius_to_kelvin();
    break;
  case 3:
    farenheit_to_celcius();
    break;
  case 4:
    farenheit_to_kelvin();
    break;
  case 5:
    kelvin_to_celcius();
    break;
  case 6:
    kelvin_to_farenheit();
    break;
  }
}

/*
output1
choose 
choose 
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
1
enter the celcius
0
farenheit = 32.000000

output2
choose 
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
2
enter the celcius
0
kelvin = 273.149994

output3
choose
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
3
enter the farenheit
0
celcius = -17.777779

output4
choose
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
4
enter the farenheit
0
kelvin = 255.372223

output5
choose 
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
5
enter the kelvin
0
celcius = -273.149994

ouput6
choose 
1. celcius_to_fareheit 
2. celcius_to_kelvin 
3. farenheit_to_celcius 
4. farenheit_to_kelvin 
5. kelvin_to_celcius 
6. kelvin_to_farenheit
6
enter the kelvin
0
celcius = -459.670013
*/