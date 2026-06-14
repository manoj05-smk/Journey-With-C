#include <stdio.h>
int main()
{
    //Temperature Converter Code

    int option=0;
    double temperature;
    double result=0.0;
    printf("---Temperature Converter---\n");
    printf("1.Celsius to Kelvin\n2.Kelvin to Celsius\n3.Fahrenheit to Celsius\n4.Celsius to Fahrenheit\n");
    printf("Enter your Option: ");
    scanf("%d",&option);
    if(option == 1)
    {
        printf("Enter Temperature in Celsius: ");
        scanf("%lf",&temperature);
        result = temperature + 273.15;
        printf("%.2lf Celsius equal to %.2lf kelvin",temperature,result);
    }
    else if(option == 2)
    {
        printf("Enter Temperature in Kelvin: ");
        scanf("%lf",&temperature);
        result = temperature - 273.15;
        printf("%.2lf Kelvin equal to %.2lf Celsius",temperature,result);
    }
    else if(option == 3)
    {
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%lf",&temperature);
        result = (temperature - 32) * (5.0/9.0);
        printf("%.2lf Fahrenheit equal to %.2lf Celsius",temperature,result);

    }
    else if(option == 4)
    {
        printf("Enter Temperature in Celsius: ");
        scanf("%lf",&temperature);
        result = temperature * (9.0/5.0) + 32 ;
        printf("%.2lf Celsius equal to %.2lf Fahrenheit",temperature,result);
    }
    else
    {
        printf("\nInvalid Choice..!Please Choose Correct Option.");
    }
    return 0;   
}