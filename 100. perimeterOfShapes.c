/*
perimeter of shapes
*/

#include <stdio.h>
#include <string.h>

void perimeter_of_circle(){
    float r;
    printf("\nenter the radius of the circle");
    scanf("%f", &r);
    printf("perimeter of circle = %.2f", (2 * 3.14 * r));
}

void perimeter_of_square(){
    float s;
    printf("\nenter the side of the square");
    scanf("%f", &s);
    printf("perimeter of square = %.2f", (4 * s));
}

void perimeter_of_rectangle(){
    float l, b;
    printf("\nenter the length and breadth of the rectangle");
    scanf("%f", &l);
    scanf("%f", &b);
    printf("perimeter of rectangle = %.2f", 2 * (l + b));
}

void perimeter_of_triangle(){
    float a, b, c;
    printf("\nenter the three sides of the triangle");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("perimeter of triangle = %.2f", (a + b +c));
}
 
int main()
{
    int choose;
    printf("choose the perimeter to be calculated \n1. circle \n2. square \n3. rectangle \n4. triangle");
    scanf("%d", &choose);
    switch(choose){
        case 1: perimeter_of_circle(); break;
        case 2: perimeter_of_square(); break;
        case 3: perimeter_of_rectangle(); break;
        case 4: perimeter_of_triangle(); break;
    }
    return 0;
}

/*
output1

choose the perimeter to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
1

enter the radius of the circle
7
perimeter of circle = 43.96

output2
choose the perimeter to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
2

enter the side of the square
4
perimeter of square = 16.00

output3
choose the perimeter to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
3

enter the length and breadth of the rectangle
3
4
perimeter of rectangle = 14.00

output4
choose the perimeter to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
4

enter the three sides of the triangle
2
3
4
perimeter of triangle = 9.00
*/
