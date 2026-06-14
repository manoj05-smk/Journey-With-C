#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //Pseudo-Random Number Genetation
    srand(time(NULL));

    int min=1;
    int max=50;

    int randomnum=(rand() % (max - min + 1)) + min; //Math Formulae

    printf("Generated Number is %d ",randomnum);
    return 0;
}