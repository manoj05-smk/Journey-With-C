#include <stdio.h>
struct car
{
    char brand[20];
    char model[20];    
    char owner[20];
    int year;
    int no_of_owners;
};
int main()
{
    //Assigning Values using {}
    struct car c1={"Tata","punch","madhan",2024,1}; 
    //For this method no Need to use strcpy() for string assigning
    struct car c2={"Mahindra","Thar","bala",2025,3};
    struct car c3={"Toyoto","crysta","vibin",2026,2};

    printf("data 1:\n");
    printf("Car Brand: %s\nCar Model: %s\nOwner: %s\nYear: %d\nNo.of.Owners: %d\n",
        c1.brand,c1.model,c1.owner,c1.year,c1.no_of_owners);
    printf("\n");
    printf("data 2:\n");
    printf("Car Brand: %s\nCar Model: %s\nOwner: %s\nYear: %d\nNo.of.Owners: %d\n",
        c2.brand,c2.model,c2.owner,c2.year,c2.no_of_owners);
    printf("\n");
    printf("data 3:\n");
    printf("Car Brand: %s\nCar Model: %s\nOwner: %s\nYear: %d\nNo.of.Owners: %d",
        c3.brand,c3.model,c3.owner,c3.year,c3.no_of_owners);
    
    return 0;
}