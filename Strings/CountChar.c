#include <stdio.h>
#include <string.h>
int main()
{
    //Count a Specific Character
    char str[100];
    printf("Enter a String:");
    scanf("%s",&str);
    printf("Your String is: %s\n",str);
    printf("Your String length is %d\n",strlen(str));
    char chr;
    int count=0;
    getchar();
    printf("Enter Char To count:");
    scanf("%c",&chr);
    printf("\n");
    for(int i=0; i<strlen(str);i++)
    {
        if(str[i] == chr)
        {
            count++;
        }
    }
    printf("Tot Count Of Char \"%c\" In String %s is %d",chr,str,count);
}