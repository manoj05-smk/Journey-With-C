#include <stdio.h>
int main()
{
    //Upper -> Lower & Lower -> Upper
    char str[100];
    printf("Enter a String:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c to %c\n",str[i],(str[i]-32)); //Upper case 65 - 90
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z') 
        {
            printf("%c to %c\n",str[i],(str[i]+32)); //Lower case 97 - 122
            str[i]=str[i]+32;
        }
        else
        {
            printf("Test Case failed...");
        }
    }
    printf("Result string %s",str);
}