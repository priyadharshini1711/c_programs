/*
printing number from 1-n
*/

#include <stdio.h>

void display(int);  
  
int main()  
{  
    int limit;  
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &limit);  
  
    printf("\nNatural Numbers from 1 To %d are:", limit);  
    display(limit);  
  
    return 0;  
}  
  
void display(int num)  
{  
    if(num)  
        display(num-1);  
    else  
        return;  
  
    printf("\n%d", num);  
}



/*
output

Enter the number of terms to be printed
10

Natural Numbers from 1 To 10 are:
1
2
3
4
5
6
7
8
9
10
*/
