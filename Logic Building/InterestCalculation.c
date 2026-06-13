#include <stdio.h>
#include <math.h>
int main()
{
    //Simple Interest and Copound Interest Calculation
    double principal=0.0;
    double rate=0.0;
    int years=0;
    int timesCompounded=0;

    printf("Enter the Principal Amount: ");
    scanf("%lf",&principal);

    printf("Enter the Interest Rate: ");
    scanf("%lf",&rate);

    printf("Enter the No.of Years: ");
    scanf("%d",&years);

    printf("Enter the No.Of times Compuounded: ");
    scanf("%d",&timesCompounded);

    printf("--------------------------------------\n");
    //Simple Interest
    double simpleInterest=0.0;
    simpleInterest = (principal * rate * years) / 100;
    double total = principal + simpleInterest;
    printf("Total Amount After Simple Interest %.3lf Rs for %d years\n",total,years);

    //Compound Interest (more than once in year)
    double compoundAmount=0.0;
    compoundAmount = principal * (pow(1 + (rate/(timesCompounded*100)),timesCompounded*years));
    printf("Total Amount After Compound Interest %.3lf Rs for %d years\n",compoundAmount,years);
    printf("--------------------------------------\n");

    return 0;
}