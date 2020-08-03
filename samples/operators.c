
#include <stdio.h>
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   printf("a = %d, b = %d \n", a, b); 	
   c = a + b;
   printf("a + b 的值是 %d\n", c );
   c = a - b;
   printf("a - b 的值是 %d\n", c );
   c = a * b;
   printf("a * b 的值是 %d\n", c );
   c = a / b;
   printf("a / b 的值是 %d\n", c );
   c = a % b;
   printf("a % b 的值是 %d\n", c );
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("a++ 的值是 %d\n", c );
   c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   printf("a-- 的值是 %d\n", c );
 
}

