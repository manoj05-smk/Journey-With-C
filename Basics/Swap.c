#include <stdio.h>
int main() 
{
   int a=5,b=6;
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Without Using 3rd Variable:a=%d b=%d\n",a,b);
   //Now a=6,b=5
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("With Using 3rd Variable:a=%d b=%d",a,b);
   return 0;
}
