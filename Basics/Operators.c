#include <stdio.h>
int main() 
{
   int a,b;
   printf("Enter a Numbers:");
   scanf("%d %d",&a,&b);
   printf("Sum Of a & b:%d",a+b);
   printf("\nDifference between a & b:%d",a-b);
   printf("\nMultiplication Of a & b:%d",a*b);
   printf("\nDivision Of a & b:%d",a/b);
   printf("\nModulo Of a & b:%d",a%b);
   return 0;
}