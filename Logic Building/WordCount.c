#include <stdio.h>
int main()
{
    //Word Count In A Sentence
    char str[100];
    int count=0;
    printf("Enter a String:");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i-1]==' '))
        {
            count++;
        }
    }
    printf("Tot Word Count in Your sentence is %d",count);
}
//Logic : 
// Current char is NOT a space = real character
// either first character      = first word starts
// previous char was space     = new word starts