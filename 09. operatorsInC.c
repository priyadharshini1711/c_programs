#include <stdio.h>

int main() {
   int a = 20;
   int b = 10;
   printf("\n+ %d", a+b);
   printf("\n- %d", a-b);
   printf("\n* %d", a*b);
   printf("\n/ %d", a/b);
   printf("\n% %d", a%b);
   printf("\n++ %d", a++);
   printf("\n++ %d", ++a);
   printf("\n-- %d", a--);
   printf("\n-- %d", --a);
   printf("\n== %d", a ==b);
   printf("\n!= %d", a != b);
   printf("\n< %d", a < b);
   printf("\n> %d", a > b);
   printf("\n<= %d", a <= b);
   printf("\n>= %d", a >= b);
   printf("\n&& %d", a >= b && a <= b);
   printf("\n|| %d", a >= b || a <= b);
   printf("\n! %d", ! (a && b));
   printf("\n& %d", (a & b));
   printf("\n| %d", (a | b));
   printf("\n^ %d", (a ^ b));
   printf("\n~ %d", (~a));
   printf("\n<< %d",(a << 3));
   printf("\n>> %d", (a >> 3));
}
   

/*
output:
+ 30
- 10
* 200
/ 2
%d
++ 20
++ 22
-- 22
-- 20
== 0
!= 1
< 0
> 1
<= 0
>= 1
&& 0
|| 1
! 0
& 0
| 30
^ 30
~ -21
<< 160
>> 2
*/
