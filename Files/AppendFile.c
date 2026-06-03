#include <stdio.h>
int main()
{
    //Appending to a File
    FILE *fa;
    fa=fopen("val.txt","a+");
    if(fa == NULL)
    {
        printf("File is Not Present...");
    }
    printf("Before:\"val.txt\" Contains\n");
    char data[100];
    fgets(data,100,fa);
    printf("%s",data);
    printf("\n");
    fprintf(fa," in c");
    fclose(fa);
}