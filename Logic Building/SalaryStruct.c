#include <stdio.h>
struct employee
{
    int id;
    double salary;
};
void updatesalary(struct employee *e,int n)
{
    for(int i=0;i<n;i++)
    {
        (e+i)->salary = (e+i)->salary + (e+i)->salary*0.10;
    }
}
int main()
{
    //Employee Salary Processing using Structure Pointers
    int n;
    printf("Enter No.of Employees:");
    scanf("%d",&n);
    struct employee e[n];
    for(int i=0;i<n;i++)
    {
        printf("------------------------------------\n");   
        printf("Enter Employee %d Details:\n",i+1);
        printf("Employee Id:\n");
        scanf("%d",&e[i].id);
        printf("Employee Salary:\n");
        scanf("%lf",&e[i].salary);
    }
    printf("Before Increament:\n");
    printf("===================\n");
    printf("%-6s %-6s\n","ID","Salary");
    printf("-------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%-6d %-6lf\n",e[i].id,e[i].salary);
    }
    updatesalary(e,n);
    printf("After 10% Increament:\n");
    printf("===================\n");
    printf("%-6s %-6s\n","ID","Salary");
    printf("-------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%-6d %-6lf\n",e[i].id,e[i].salary);
    }
    return 0;
}