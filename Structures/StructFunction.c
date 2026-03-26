#include <stdio.h>
struct student
{
    int id;
    int std;
    int date,month,year;
};
void update(struct student *s1)
{
    //Modifying Student DOB
    s1->date=10;
    s1->month=6;
    s1->year=2006;
}
int main()
{
    //Passing Struct Pointers to Functions
    struct student s1={101,12,30,9,2005};
    printf("Before Modification:\n");
    printf("Student Id: %d\n",s1.id);
    printf("Student Standard: %d\n",s1.std);
    printf("Student Date of Birth: %d-%d-%d\n",s1.date,s1.month,s1.year);
    update(&s1); //Passing Struct to Update Function
    printf("After Modification:\n");
    printf("Student Id: %d\n",s1.id);
    printf("Student Standard: %d\n",s1.std);
    printf("Student Date of Birth: %d-%d-%d\n",s1.date,s1.month,s1.year);
    return 0;
}