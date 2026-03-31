#include <stdio.h>
void reverse(char *str,int c)
{
    for(int i=0;i<c/2;i++)
    {
        int temp=*(str+i);
        *(str+i)=*(str+c-1-i);
        *(str+c-1-i)=temp;
    }
}
int main()
{
    //String Reverse without using inBuild Functions
    char str[50];
    printf("Enter a String:");
    scanf("%s",str);
    int c=0;
    int i=0;
    while(str[i]!='\0')
    {
        c++;
        i++;
    }
    reverse(str,c);
    printf("\nReversed String: %s",str);
    return 0;
}