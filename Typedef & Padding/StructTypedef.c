#include <stdio.h>
struct Car   // Without typedef
{
    char brand[30];
    char model[20];
};
typedef struct  // With typedef
{
    char brand[30];
    char model[20];
} Car;
int main() 
{
    struct Car car1 = {"BMW","5 Series"}; // needs "struct"
    Car car2 = {"Audi","A6"}; // shorter with typedef
    printf("Car 1 details:\n");
    printf("Car Brand: %s\nCar Model: %s\n", car1.brand, car1.model);
    printf("Car 2 details:\n");
    printf("Car Brand: %s\nCar Model: %s\n", car2.brand, car2.model);
    return 0;
}