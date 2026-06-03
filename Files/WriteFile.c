#include <stdio.h>
int main()
{
    //Writing to a file 
    FILE *fp;
    fp=fopen("data.txt","w");
    fprintf(fp,"hello...");
    fclose(fp);
}