#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int r_no;
    int std;
    char class;
};
int main()
{
    //Structure copy and Modification
    struct student s1={"sithik",110,8,'B'};
    struct student s2;
    s2=s1;  //Copy Structure s2 <= s1
    printf("Before Modification:\n");
    printf("Student Name: %s\nStudent Roll_no: %d\nStandard: %d\nClass: %c\n",s2.name,s2.r_no,s2.std,s2.class);
    strcpy(s2.name,"Alan"); //Modification
    s2.std=10;
    printf("\n");
    printf("After Modification:\n");
    printf("Student Name: %s\nStudent Roll_no: %d\nStandard: %d\nClass: %c\n",s2.name,s2.r_no,s2.std,s2.class);
    return 0;
}