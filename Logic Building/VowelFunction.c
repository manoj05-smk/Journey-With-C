#include <stdio.h>
int vowel(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count ++;
        }
    }
    printf("Tot no.of Vowels in %s is %d",str,count);
}
int main()
{
    //Vowels In String
    char name[10];
    printf("Enter a string:");
    scanf("%s",name);
    vowel(name);
}