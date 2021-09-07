/*
area of shapes
*/

#include <stdio.h>
#include <string.h>

void area_of_circle(){
    float r;
    printf("\nenter the radius of the circle");
    scanf("%f", &r);
    printf("area of circle = %.2f", (3.14 * r * r));
}

void area_of_square(){
    float s;
    printf("\nenter the side of the square");
    scanf("%f", &s);
    printf("area of square = %.2f", (s * s));
}

void area_of_rectangle(){
    float l, b;
    printf("\nenter the length and breadth of the rectangle");
    scanf("%f", &l);
    scanf("%f", &b);
    printf("area of rectangle = %.2f", (l*b));
}

void area_of_triangle(){
    float b, h;
    printf("\nenter the base and height of the triangle");
    scanf("%f", &b);
    scanf("%f", &h);
    printf("area of triangle = %.2f", (0.5 * b * h));
}
 
int main()
{
    int choose;
    printf("choose the are to be calculated \n1. circle \n2. square \n3. rectangle \n4. triangle");
    scanf("%d", &choose);
    switch(choose){
        case 1: area_of_circle(); break;
        case 2: area_of_square(); break;
        case 3: area_of_rectangle(); break;
        case 4: area_of_triangle(); break;
    }
    return 0;
}

/*
output1

choose the are to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
1

enter the radius of the circle
7
area of circle = 153.86

output2
choose the are to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
2

enter the side of the square
4
area of square = 16.00

output3
choose the are to be calculated 
1. circle 
2. square
3. rectangle 
4. triangle
3

enter the length and breadth of the rectangle
4
3
area of rectangle = 12.00

output4
choose the are to be calculated 
1. circle 
2. square 
3. rectangle 
4. triangle
4

enter the base and height of the triangle
4
3
area of triangle = 6.00
*/
