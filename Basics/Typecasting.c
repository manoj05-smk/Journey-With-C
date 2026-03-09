#include <stdio.h>
int main() 
{
   //Type Casting Understanding
   int a=5,b=2;
   int c;
   c=a/b;
   printf("\nDivision Of a & b:%d",c);
   printf("\nModulo Of a & b:%d", a%b);
   float A=5;
   float B=2;
   float d=A/B;
   printf("\nDivision Of a & b:%f",d);
   printf("\nDivision Of a & b:%.2f",d);
   return 0;
}