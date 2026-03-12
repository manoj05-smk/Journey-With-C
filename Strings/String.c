#include <stdio.h>
int main()
{
    //Name Printing
    char name[] = "Manoj Kumar";
    printf("My name is %s",name);
    printf("\nSize of String is %d",sizeof(name));//In Bytes 11 + 1->Null
    printf("\n %p",name);//Array name already represents the address of the first element
    printf("\n %p",&name[0]);
    return 0;
}