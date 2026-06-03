#include <stdio.h>
int main()
{
    //Read and Display File Content
    FILE *fr;
    fr=fopen("content.txt","r");
    if(fr == NULL)
    {
        printf("\nFile is Not Present...");
    }
    char data[100];
    while(fgets(data,100,fr) != NULL)
    {
        printf("%s",data);
    }
    fclose(fr);
}