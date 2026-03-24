#include <stdio.h>
#include <string.h>
struct mydata
{
    char name[30];
    int age;
    char qualification[40];
};
int main()
{
    //Assigning value to String member using strcpy()
    struct mydata s1;
    strcpy(s1.name,"Manoj");
    s1.age = 21;
    strcpy(s1.qualification,"AIDS");

    struct mydata s2;
    strcpy(s2.name,"Sathis");
    s2.age = 20;
    strcpy(s2.qualification,"BSC");

    struct mydata s3;
    strcpy(s3.name,"Viswa");
    s3.age = 19;
    strcpy(s3.qualification,"B.Com");

    printf("Data 1:\n");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Qualification: %s\n",s1.qualification);

    printf("Data 2:\n");
    printf("Name: %s\n",s2.name);
    printf("Age: %d\n",s2.age);
    printf("Qualification: %s\n",s2.qualification);

    printf("Data 3:\n");
    printf("Name: %s\n",s3.name);
    printf("Age: %d\n",s3.age);
    printf("Qualification: %s\n",s3.qualification);
    return 0;
}