#include <stdio.h>
int main()
{
    //White Space Removal
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==32) // str[i] == ' '
        {
            for(int j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            } 
           i--; // i-- then loop Increament i++ -> For Rechecking
        }
    }
    printf("String After White Space Removal: %s",str);
}