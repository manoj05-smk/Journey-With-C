#include <stdio.h>
#include <string.h>
int main()
{
    //Anagram Checking
    char str1[50],str2[50];
    printf("Enter a string 1:");
    scanf("%s",str1);
    printf("\n");
    printf("Enter a String 2:");
    scanf("%s",str2);
    int isanagram=1; //On State
    if(strlen(str1) == strlen(str2))
    {
        for(int i=0;str1[i]!='\0';i++)
        {
            int found=0; //Not Seen
            for(int j=0;str2[j]!='\0';j++)
            {
                if(str1[i] == str2[j])
                {
                    found = 1; //Seen
                    str2[j]='#'; //Marked as used
                    break;
                }
            }
            if(found == 0)
            {
                isanagram = 0; //OFF State
                break;
            }
        }
        if(isanagram == 1)
        {
            printf("\nIt is a Anagram..!");
        }
        else
        {
            printf("\nNot a Anagram..!");
        }
    }
    else
    {
        printf("\nNot a Anagram..!");
    }
    return 0;
}