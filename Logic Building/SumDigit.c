#include <stdio.h>
int sumofdigit(int n)
{
    int sum=0;
    int s;
    while(n>0)
    {
       s=n%10;
       sum += s;
       n=n/10;
    }
    return sum;
}
int main()
{
    //Sum of Digits for given Number
    int val;
    printf("Enter a Number:");
    scanf("%d",&val);
    printf("Sum of Digit of %d is %d",val,sumofdigit(val));
}