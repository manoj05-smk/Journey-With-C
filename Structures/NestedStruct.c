#include <stdio.h>
struct employee
{
    char name[20];
    char qualification[20];
};
struct professor
{
   char Grade[20];
   int year;
   struct employee emp1; //Identified as emp1
};
struct developer
{
    char role[20];
    double salary;
    struct employee emp2; //Identified as emp2
};
int main()
{
    //Creation of Nested Structure
    struct employee emp={"AK","M.tech"};
    struct professor p1={"Associate professor",2004,emp};
    struct developer d1={"Senior Developer",55000.0000,emp};

    printf("Data 1:\n");
    printf("Name: %s\nQualification: %s\nGrade: %s\nYear: %d\n",p1.emp1.name,p1.emp1.qualification,p1.Grade,p1.year);
    printf("\n");
    printf("Data 2:\n");
    printf("Name: %s\nQualification: %s\nRole: %s\nsalary: %.2f\n",d1.emp2.name,d1.emp2.qualification,d1.role,d1.salary);
    return 0;
}