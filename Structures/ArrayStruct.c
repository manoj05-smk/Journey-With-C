#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    int std;
    int marks;
    char grade;
};
int main()
{
    //Struture Creation For Student Details Using Array of Structures
    int n;
    printf("Enter the no.of Student:");
    scanf("%d",&n);
    struct student s[n];
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("---------------------------------\n");
        printf("Enter student %d Details:\n",i+1);
        printf("Enter Student ID:");
        scanf("%d",&s[i].id);
        printf("\n");
        char temp[20];
        printf("Enter Student Name:");
        scanf("%s",temp);
        strcpy(s[i].name,temp);
        printf("\n");
        printf("Enter Student Class:");
        scanf("%d",&s[i].std);
        printf("\n");
        printf("Enter Student Marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
        printf("Enter Student Grade:");
        scanf(" %c",&s[i].grade); //Avoid Buffer so => ( %c)
    }
    printf("\nStudent Deatils are Suceessfully Entered...");

    printf("\nStudent Details:\n");
    printf("==================================================\n");
    printf("%-10s %-10s %-10s %-10s %-10s\n","Id","Name","Class","Marks","Grade");
    printf("--------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%-10d %-10s %-10d %-10d %-10c\n",
            s[i].id,s[i].name,s[i].std,s[i].marks,s[i].grade);
    }
    return 0;
}