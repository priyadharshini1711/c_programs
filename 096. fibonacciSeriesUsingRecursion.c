/*
Fibonacci series using recursion
*/

#include <stdio.h>

#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
   printf("Enter the number of terms\n");
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
    if ( n == 0 )
      return 0;
    else if ( n == 1 )
      return 1;
    else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 


/*
output

Enter the number of terms
5
Fibonacci series
0
1
1
2
3
*/
