#include <stdio.h>
#include <string.h>
int main()
{
    //Count Characters (Without strlen())
    char str[]="Valuable";
    int count=0;
    printf("characters in String:\n");
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
        count++;
    }
    printf("\n");
    printf("Tot Count is: %d\n",count);
    printf("For Checking Only... %d",strlen(str));
}