#include <stdio.h>
int main()
{
    //Vowels,Consonants and WhiteSpace Count
    char str[100];
    int vowel_count=0,consonant_count=0,spacecount=0;
    printf("Enter a String:");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel_count++;
        }
        else if(str[i]==' ')
        {
            spacecount++;
        }
        else
        {
            consonant_count++;
        }
    }
    printf("Vowels Count %d\n",vowel_count);
    printf("Consonants Count %d\n",consonant_count);
    printf("WhiteSpace Count %d",spacecount);
}