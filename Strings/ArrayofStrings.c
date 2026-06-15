#include <stdio.h>
#include <string.h>
int main()
{
    //Array Of Strings
    char fruits[5][25] = {0};

    for(int i=0;i<sizeof(fruits)/sizeof(fruits[0]);i++)
    {
        printf("Enter Name %d: ",i+1);
        fgets(fruits[i],sizeof(fruits[i]),stdin);
        fruits[i][strlen(fruits[i]) - 1] = '\0';
    }

    printf("Your Outputs:\n");
    for(int j=0;j<sizeof(fruits)/sizeof(fruits[0]);j++)
    {
        printf("%s\n",fruits[j]);
    }
    return 0;
}