#include <stdio.h>
int main()
{
    //Loop Through a String
    char str1[]="Welcome To C...";
    char str2[]="Programming";
    printf("Size of String-1 is %d\n",sizeof(str1));
    for(int i=0;str1[i]!='\0';i++)
    {
        printf("%c ",str1[i]);
    }
    printf("\n");
    printf("Size of String-2 is %d\n",sizeof(str2));
    for(int j=0;j<sizeof(str2);j++)
    {
        printf("%c ",str2[j]);
    }
}