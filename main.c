#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"


int main()
{
    bool run = true;

    printf;
    double in_deposit;
    double in_withdraw;
    double intrest;
    int account_id;
    char choice;
    //while (run)
    
    do
    {
        printf("\n\nList of Bank Operations: \nO: Open new bank account & first deposit"
               "\nB: Balance \nD: Deposit \nW: Withdraw \nC: Close account "
               "\nI: Add Intrest \nP: Print Accounts"
               "\nE: Exit\nChoose operation: ");
         scanf(" %c", &choice);
        while(getchar()!='\n');
    

        switch (choice)
        {
        case 'O':
           do{
               printf("Opening new account ,Pleas enter deposit (cant be negative): ");
            while (scanf("%lf", &in_deposit) != 1)
            {
                printf("Opening new account ,Pleas enter deposit (cant be negative): ");
                scanf("%lf", &in_deposit);
                while (getchar() != '\n');
            }
           }while(in_deposit<0);
            
            open_BankAcc(in_deposit);           
            
            break;

        case 'B':

            do
            {
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            check_Balance(account_id);

            break;

        case 'D':
          
            do
            { 
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            
            do{
                printf("Pleas enter deposit (cant be negative) : ");
            while (scanf("%lf", &in_deposit) != 1)
            {
                printf("Pleas enter deposit (cant be negative) : ");
                scanf("%lf", &in_deposit);
                while (getchar() != '\n');
            }
            }while(in_deposit<0);

            new_Deposit(account_id, in_deposit);

            break;

        case 'W':
           do
            { 
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            
            do{
                printf("Pleas enter withdraw (cant be negative) : ");
            while (scanf("%lf", &in_withdraw) != 1)
            {
                printf("Pleas enter withdraw (cant be negative) : ");
                scanf("%lf", &in_withdraw);
                while (getchar() != '\n');
            }
            }while(in_deposit<0);

            new_Withdraw(account_id, in_withdraw);

            break;

        case 'C':
            do
            { 
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            close_Account(account_id);

            break;

        case 'I':
           do{
                printf("Pleas enter intrest (cant be negative) : ");
            while (scanf("%lf", &intrest) != 1)
            {
                printf("Pleas enter intrest (cant be negative) : ");
                scanf("%lf", &intrest);
                while (getchar() != '\n');
            }
            }while(intrest<0);

            add_interest(intrest);
            
            break;

        case 'P':
            
            print_accounts();

            break;

        case 'E':

            printf("closing all accounts");
            close_bank();
            run = false;
            break;

        default:
            printf("\nERR : invalid input\n");
            break;
        }
    }while(run);
    printf("\nBank is closed\n");
    return 0;
}