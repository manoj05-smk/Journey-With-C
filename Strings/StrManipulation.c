#include <stdio.h>
int main()
{
    //String Manipulation
    char msg[]="Hello World!";
    printf("\nSize of The msg is %d",sizeof(msg));
    printf("\n%c",msg[0]);
    printf("\n%c",msg[1]);
    printf("\n%c",msg[6]);
    printf("\nDo You Want to change any Character in this? (y or n): ");
    char res,c;
    int l;
    scanf("%c",&res);
    if(res == 'y')
    {
        printf("\nEnter Position:");
        scanf("%d",&l);
        printf("\nEnter Char:");
        scanf(" %c",&c);//White Space Avoids newline characters in the input buffer \n->Enter
        msg[l]=c;//String Modification
        printf("\n%s",msg);
    }
    else
    {
        printf("\nThank You...");
    }
    return 0;
}