#include <stdio.h>
typedef float temperature; //Global Declaration
int main()
{
    //Typedef usage
    temperature today=20.1; //alias 1
    printf("Today's Temperature is %.2f degree Celsius.\n",today);
    temperature tomorrow=22.5; //alias 2
    printf("Tomorrow's Temperature will be %.2f degree Celsius.\n",tomorrow);
    return 0;
}