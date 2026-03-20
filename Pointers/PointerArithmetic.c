#include <stdio.h>
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *start = myNumbers; // points to 10
    int *end = &myNumbers[4];   // points to 50
    printf("No.of In between Elements: %d\n", end - start); 
}