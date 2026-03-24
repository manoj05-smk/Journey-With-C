#include <stdio.h>
struct data
{
    int year;
    int date;
    int month;
};
int main()
{
    //simple Structure Execution
    struct data m1;
    m1.year=2026;
    m1.date=24;
    m1.month=3;
    printf("Today's Date is %d:%d:%d",m1.date,m1.month,m1.year); 
    printf("\n");
    struct data m2;
    m2.year=2026;
    m2.month=3;
    m2.date=25;
    printf("Tomorrow's Date is %d:%d:%d",m2.date,m2.month,m2.year);
}
