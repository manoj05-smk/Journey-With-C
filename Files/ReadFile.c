#include <stdio.h>
int main()
{
    //Reading a File
    FILE *fr;
    fr=fopen("data.txt","r");
    if(fr != NULL)
    {
        char content[100];
        fscanf(fr,"%s",content); //Use fgets() method also
        printf("%s",content);
    }
    fclose(fr);
}