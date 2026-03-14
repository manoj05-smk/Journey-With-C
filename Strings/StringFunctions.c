#include <stdio.h>
#include <string.h>
int main()
{
    //Usage of String Functions
    char str1[]="Welcome to C "; 
    char str2[]="Programming";
    char str3[20];
    printf("String 1 Length %d\n",strlen(str1)); // length (NOT counting \0)
    printf("String 2 length %d\n",strlen(str2));
    printf("Copy of String 3 is --- %s\n",strcpy(str3,str1)); //strcpy(destination,source)
    printf("Equal-> if(0): %d\n",strcmp(str1,str2)); // compare (0 = equal) Note: (based on Alphabetical)
    printf("%s\n",(str1 == str3)?"true":"false");// (==) compares addresses
    printf("%s\n",strcat(str1,str2)); //strcat(dst,src)
}