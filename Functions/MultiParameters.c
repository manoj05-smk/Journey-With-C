#include <stdio.h>
void display(char name[],int age)
{
    printf("Hi..!I am %s.I am %d Years Old...\n",name,age);
}
int main()
{
    //Multiple Parameter Passing
    display("Sathis",21);
    display("Viswa",20);
    display("Bala",21);
    display("Madhan",21);
    display("Vibin",19);
    return 0;
}