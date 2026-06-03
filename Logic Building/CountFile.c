#include <stdio.h>
int main()
{
    //Count Characters in File Content
    FILE *fr;
    fr=fopen("val.txt","r");
    char ch;
    int count=0;
    while((ch = fgetc(fr)) != EOF)
    {
        count++;
    }
    fclose(fr);
    printf("Total No.of Charaters: %d",count);
}