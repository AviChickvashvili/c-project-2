#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"

//at 0 - will be balance
//at 1 - will be banks id's
double bank[2][50];

void open_BankAcc(double deposit)
{
    bool opened = false;

    for (int i = 0; i < 50 && opened == false; i++)
    {
        if (bank[1][i] == 0)
        {
            bank[1][i] = (int)(i + 901);
            bank[0][i] = bank[0][i] + deposit;
            int new_id = (int)bank[1][i];
            printf("\n-[ New account id: %d ]-    -[ New balance is: %.2lf ]- \n", new_id, bank[0][i]);
            opened = true;
        }
    }
    if (opened == false)
    {
        printf("\n-[ srry the bank is full ]-\n");
    }
}

void check_Balance(int account_id)
{

    bool exists = false;

    for (int i = 0; i < 50 ; i++)
    {
        if (account_id == bank[1][i])
        {
            printf("\n-[ Your current balance is : %.2lf ]-\n", bank[0][i]);
            exists = true;
        }
       
    }
    if(exists==false)
    {
        printf("\n-[ The bank id does not exist ]-\n");
    }
}

void new_Deposit(int account_id, double deposit)
{
    bool exists = false;

    for (int i = 0; i < 50 ; i++)
    {
        if (account_id == bank[1][i])
        {
            bank[0][i] = bank[0][i] + deposit;
            printf("\n-[ Your current new balance is : %.2lf ]-\n", bank[0][i]);
            exists = true;
        }
    }
    if(exists==false)
    {
        printf("\n-[ The bank id does not exist ]-\n");
    }
}

void new_Withdraw(int account_id, double in_withdraw)
{

    for (int i = 0; i < 50 ; i++)
    {
        if (bank[1][i] == account_id)
        {
            if (bank[0][i] >= in_withdraw)
            {
                bank[0][i] = bank[0][i] - in_withdraw;
                printf("\n-[ the new Balance is : %.2lf ]-\n", bank[0][i]);
            }
            else
            {
                printf("\n-[ not eough funds you only have : %.2lf in your account number : %d ]-\n", bank[0][i],account_id);
            }
        }
    }
}

void close_Account(int account_id)
{
    bool closed = false;
    for (int i = 0; i < 50 ; i++)
    {
        if(bank[1][i] == account_id )
        {
            bank[0][i]=0;
            bank[1][i]=0;
            printf("\n-[ account id : %d is now closed. ]-\n" , account_id);
            closed = true;
        }
    }
    if(closed == false)
    {
        printf("\n-[ The bank id does not exist ]-\n");
    }
}

void add_interest(double interest_precent)
{
    if(interest_precent == 0)
    {
        interest_precent = 0;
    }
    else
    {
    interest_precent = interest_precent/100 ;
    }
    for (int i = 0; i < 50 ; i++)
    {
        double ans = interest_precent*bank[0][i];
        bank[0][i] = bank[0][i] + ans ;
        if( (int)bank[1][i] == 0 ) {}
        else
        {
            printf("\n-[ Account id: %d ]-    -[ balance is: %.2lf ]- ", (int)bank[1][i], bank[0][i]);
        }
    }
    
}

void print_accounts()
{
    
    for (int i = 0; i < 50 ; i++)
    {
        if( (int)bank[1][i] == 0 ) {}
        else
        {
            printf("\n-[ Account id: %d ]-    -[ balance is: %.2lf ]- ", (int)bank[1][i], bank[0][i]);
        }
    }
}

void close_bank()
{
    for (int i = 0; i < 50 ; i++)
    {
        bank[0][i]=0;
        bank[1][i]=0;
        printf("\n-[ Account id: %d ]-    -[ balance is: %.2lf ]- ", (int)bank[1][i], bank[0][i]);
    }
    
    
}
