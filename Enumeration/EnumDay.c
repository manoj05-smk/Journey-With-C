#include <stdio.h>
enum day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    enum day today=Friday;
    printf("Number For Friday is: %d",today);
    return 0;
}
