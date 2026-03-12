#include <stdio.h>
int main()
{
    //Read a String from user And print It...
    char aim[100];
    char info[100];
    printf("Enter Your Aim Here:");
    scanf("%[^\n]s",aim); //Using Scanset method
    printf("\nUser Input:\n%s",aim);
    printf("\n");
    getchar(); //Clear the buffer before calling fgets()
    printf("Enter Information Here:");
    fgets(info,100,stdin); //Using fgets method
    printf("\nUser InFo:\n%s",info);
}