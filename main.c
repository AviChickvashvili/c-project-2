#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"


int main()
{
    bool run = true;
    double in_deposit;
    double in_withdraw;
    int account_id;
    char choice;
    //while (run)
    do
    {
        printf("\nList of Bank Operations: \nO: Open new bank account & first deposit"
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
/*
        case 'B':

            do
            {
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            ans = check_Balance(account_id, num_rows, num_cols, Bank);

            if (ans == -1)
            {
                printf("\n**** ERR : srry this bank account id does not exist ****\n");
            }

            break;

        case 'D':
            do
            {
                
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

            printf("Pleas enter deposit : ");
            while (scanf("%lf", &in_deposit) != 1)
            {
                printf("Pleas enter deposit : ");
                scanf("%lf", &in_deposit);
                while (getchar() != '\n')
                    ;
            }
            ans = new_Deposit(account_id, in_deposit, num_rows, num_cols, Bank);

            if (ans == -1)
            {
                printf("\n**** ERR : srry this bank account id does not exist ****\n");
            }
            else if (ans == -2)
            {
                printf("\n**** ERR : deposit cant be negative ****\n");
            }

            break;

        case 'W':
            do
            {
                
                printf("Please enter your bank account id (901-950):");
                scanf("%d", &account_id);
                while (getchar() != '\n');

            } while (account_id < 901 || account_id > 950);

                printf("Pleas enter deposit : ");
            while (scanf("%lf", &in_withdraw) != 1)
            {
                printf("Pleas enter deposit : ");
                scanf("%lf", &in_withdraw);
                while (getchar() != '\n')
                    ;
            }
            ans=new_Withdraw(account_id, in_withdraw, num_rows, num_cols, Bank);

            if (ans == -1)
            {
                printf("\n**** ERR : srry this bank account id does not exist ****\n");
            }
            if(ans == -2 )
            {
                printf("\n**** ERR : you cant withdraw negative value ****\n");
            }
            if( ans == -3 )
            {
                printf("\n**** ERR : Not enough funds for this account to withdraw");
            }

            break;

        case 'C':
            printf("Bye-Bye");
            break;

        case 'I':
            printf("Bye-Bye");
            break;

        case 'P':
            printf("Bye-Bye");
            break;
*/
        case 'E':
            printf("Bye-Bye");
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