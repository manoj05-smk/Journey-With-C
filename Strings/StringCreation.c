#include <stdio.h>
int main()
{
    //Ways of Creating a String
    char way1[]="India";//compiler adds \0 automatically
    char way2[]= {'I','n','d','i','a','\0'}; // Add \0
    printf("%s",way1);
    printf("\n%s",way2);
    printf("\nSize of Way1 String: %d",sizeof(way1));
    printf("\nSize of Way2 String: %d",sizeof(way2));
}