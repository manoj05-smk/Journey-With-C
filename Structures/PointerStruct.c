#include <stdio.h>
struct data
{
    char brand[20];
    int year;
};
int main()
{
    //Pointer to a Structure
    struct data c1={"Jaguar",2026};
    struct data *ptr=&c1; //Creating pointer to c1 (ie. ptr --> c1)
    printf("Before Modification:\n");
    printf("Car Brand: %s\n",ptr->brand);
    printf("Year: %d\n",ptr->year);
    //To access its members use the (->) operator
    ptr->year = 2023;
    printf("After Modification:\n");
    printf("Car Brand: %s\n",ptr->brand);
    printf("Year: %d",(*ptr).year); // Note: ptr-> ==  (*ptr).
    return 0;
}