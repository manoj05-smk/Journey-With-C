#include <stdio.h>
#include <math.h>
int main()
{
    //Basic Area and Volume Calculation
    double C_radius=0.0;
    double S_radius=0.0;
    const double PI=3.14;
    
    //Area of Circle
    double C_area=0.0;
    printf("Enter the Radius of Circle (in cm): ");
    scanf("%lf",&C_radius);
    C_area = PI * pow(C_radius,2);
    printf("Area of Circle is %.2lf cm^2\n",C_area);
    printf("----------------------------------------\n");

    //Area & Volume of Sphere
    double S_area=0.0;
    double volume=0.0;
    printf("Enter the Radius of Sphere (in cm): ");
    scanf("%lf",&S_radius);
    S_area = 4 * PI * pow(S_radius,2);
    volume = (4.0/3.0) * PI * pow(S_radius,3);
    printf("Area of Sphere is %.2lf cm^2\n",S_area);
    printf("Volume of Sphere is %.2lf cm^2",volume);

    return 0;
}