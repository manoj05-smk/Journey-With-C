#include <stdio.h>
int main() 
{
   //Type Casting Understanding
   int a=5,b=2;
   int m=9;
   float f=m;
   printf("Type Conversion int -> float: %.2f",f);
   int c;
   c=a/b;
   printf("\nDivision Of a & b:%d",c);
   printf("\nModulo Of a & b:%d", a%b);
   int A=5;
   int B=2;
   float d=A/B;
   printf("\nDivision Of a & b (Without Typecasting) : %f",d);
   float v=(float)A/B;
   printf("\nDivision Of a & b (With TypeCasting) : %.2f",v);
   return 0;
}