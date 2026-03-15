#include <stdio.h>
int main()
{
    //Ascii Value For Each char
    char str[20];
    printf("Enter a String to See a ASCII value:");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c -> %d\n",str[i],str[i]);
    }
}