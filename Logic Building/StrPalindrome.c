#include <stdio.h>
#include <string.h>
int main()
{
    //Palindrome Check For string
    char str[50];
    char temp[50]; //temp[50] = {0} => fill with null
    printf("Enter a String:");
    scanf("%s",str);
    int n=strlen(str);
    int read=0;
    for(int i=n-1;i>=0;i--) // Note:length 5 => (0 to 4)
    {
        temp[read]=str[i];
        read++;
    }
    temp[read]='\0'; //End of Temp->string
    printf("%s\n",temp);
    if(strcmp(str,temp) == 0)
    {
        printf("It is a Palindrome...");
    }
    else
    {
        printf("Not a Palindrome...");
    }
}