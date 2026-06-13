#include <stdio.h>
int main()
{
    //Weight Converter Code
    float kilograms=0.0f;
    float pounds=0.0f;
    int choice=0;

    printf("Weight Converter Code:\n");
    printf("1.Kilograms to Pounds \n2.Pounds to Kilograms\n");
    printf("Enter Your Choice (1 or 2): ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        //Kilograms to Pounds
        printf("Enter the Weight Kilograms: ");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2ff Kilograms equal to %.2f Pounds",kilograms,pounds);
    }
    else if(choice == 2)
    {
        //Pounds to Kilograms
        printf("Enter the Weight Pounds: ");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds equal to %.2f kilgrams",pounds,kilograms);
    }
    else
    {
        printf("Invalid Choice..!Please Enter 1 OR 2 Only.");
    }
    return 0;
} 