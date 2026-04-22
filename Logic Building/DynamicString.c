#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* myStrcpy(const char *src)
{
    int n=strlen(src);
    char *dynamic=malloc((n+1)*sizeof(char));
    for(int i=0;i<n;i++)
    {
        dynamic[i]=src[i];
    }
    dynamic[n]='\0';
    return dynamic;
}
int main()
{
    //Dynamic String Copy
    char word[50];
    printf("Enter a String:");
    fgets(word,sizeof(word),stdin);
    char *str=myStrcpy(word);
    printf("\nString Copy is %s",str);
    free(str);
    str=NULL;
    return 0;
}