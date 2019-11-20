#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"

//at 0 - will be balance
//at 1 - will be banks id's
double bank[2][2];

void open_BankAcc(double deposit)
{
    bool opened = false;

    for (int i = 0; i < 2 && opened == false; i++)
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

int check_Balance(int account_id, int num_rows, int num_cols, double bank[][num_cols])
{

    if (account_id < 901 || account_id > 950)
    {
        return -1;
    }

    bool exists = false;

    for (int i = 0; i < num_cols && exists == false; i++)
    {
        if (account_id == bank[1][i])
        {
            printf("\nYour current balance is : %.2lf\n", bank[0][i]);
            exists = true;
        }
        else
        {
            return -1;
        }
    }
}

int new_Deposit(int account_id, double deposit, int num_rows, int num_cols, double bank[][num_cols])
{

    if (account_id < 901 || account_id > 950)
    {
        return -1;
    }
    if (deposit < 0)
    {
        return -2;
    }

    bool exists = false;

    for (int i = 0; i < num_cols && exists == false; i++)
    {
        if (account_id == bank[1][i])
        {
            bank[0][i] = bank[0][i] + deposit;
            printf("\nYour current new balance is : %.2lf\n", bank[0][i]);
            exists = true;
        }
        else
        {
            return -1;
        }
    }
}

int new_Withdraw(int account_id, double withdraw, int num_rows, int num_cols, double bank[][num_cols])
{

    if (account_id < 901 || account_id > 950)
    {
        return -1;
    }
    if (withdraw < 0)
    {
        return -2;
    }

    for (int i = 0; i < num_cols; i++)
    {
        if (bank[1][i] == account_id)
        {
            if ((bank[0][i] - withdraw) >= 0)
            {
                bank[0][i] = bank[0][i] - withdraw;
                printf("\nthe new Balance is : %.2lf\n", bank[0][i]);
            }
            else
            {
                return -3;
            }
        }
    }
}