#include <stdio.h>
#include <string.h>
void wordextract(char *str,int n)
{
    for(int i=0;i<n;i++)
    {
        if(*(str+i) >= 65 && *(str+i) <= 90 || *(str+i) >= 97 && *(str+i) <= 122)
        {
            continue;
        }
        else
        {
            for(int j=i;j<n;j++)
            {
                *(str+j) = *(str+j+1);
            }
            n--; //Shrinking of Length n
        }
    i--;      
    }
}
int main()
{
    //Special Character Removal (i.e Extract only Character From a Input String)
    char str[100];
    printf("Enter a String with Special Characters:");
    scanf("%[^\n]",str);
    int n=strlen(str);
    printf("Before Removal: %s\n",str);
    wordextract(str,n);
    printf("After Removal: %s",str);
    return 0;
}