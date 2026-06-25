#include <stdio.h>
#include <string.h>

void checkBalance(double balance);
void deposit(double amount);
double withdraw(double balance,double amount);

int main()
{
    int tries=3;
    int login=0;

    double balance=0.0;
    int choice=0;
    double amount=0.0;
    int accountno = 9001;
    char password[20] = "user123";

    int acc_no=0;
    char pass[20]="";
    do
    {
        printf("*** WELCOME TO THE BANK OF INDIA ***\n");
        printf("Enter Your Account Number: ");
        scanf("%d",&acc_no);
        printf("Enter Your Password: ");
        scanf("%s",pass);
        if(accountno == acc_no && (strcmp(password,pass) == 0))
        {
            login=1;
            printf("Login Verified...\n");
            do
            {
                printf("*** Banking System ***\n");
                printf("Menu:\n");
                printf("1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit\n");
                printf("Enter Your Choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                        checkBalance(balance);
                        break;
                    case 2:
                        printf("Enter the Amount to Deposit: ");
                        scanf("%lf",&amount);
                        if(amount>0)
                        {
                             deposit(amount);
                            balance += amount;
                            printf("Your Current Balance is %.2lf Rs\n",balance);
                        }
                        else
                        {
                            printf("Enter a Valid Amount..!");
                        }
                        break;
                    case 3:
                        printf("Enter the Amount to Withdraw: ");
                        scanf("%lf",&amount);
                        if(amount>0)
                        {
                            balance -= withdraw(balance,amount);;
                            printf("Your Current Balance is %.2lf Rs\n",balance);
                        }
                        else
                        {
                            printf("Enter a Valid Amount..!");
                        }
                        break;
                    case 4:
                        printf("Exiting the System...ThankYou Visit Again..!");
                        break;
                    default:
                        printf("Invalid Choice..!Please Choose Wisely.\n");
                }
            }
            while(choice != 4);
            break;
        }
        else
        {
            printf("Invalid Login..!***Please Verify***\n");
            tries--;
            printf("Remaining Attempts %d\n",tries); 
            printf("--------------------------\n");
        }
    }
    while(tries>0);
    if(!login)
    {
        printf("\n-----> Your Account was *** LOCKED *** <-----");
    }
    return 0;
}
   
void checkBalance(double balance)
{
    printf("Your Current Balance is %.2lf Rs\n",balance);
}
void deposit(double amount)
{
    printf("You have Deposited %.2lf Rs to Your Savings Account..!\n",amount);
}
double withdraw(double balance,double amount)
{
    if(amount>balance)
    {
        printf("Invalid Balance..!You cannot Witdraw %.2lf Rs...\n",amount);
        return 0;
    }
    else
    {
        printf("Amount %.2lf Rs Successfully witdrawn from your Account...\n",amount);
        return amount;
    }
}
