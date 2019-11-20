#ifndef _myBank_h_
#define  _myBank_h_
    //at 0 - will be balance
    //at 1 - will be banks id's
extern double bank[2][50];

//1. opens new bank account ONLY if there is less than 50
//2. prints the new bank account id
//3. saves the first deposit to the account
void open_BankAcc(double deposit);

//1. gets bank account id 
//2. prints the current balance of the account
//3. this action is only available if the bank account status is OPEN
int check_Balance(int account_id ,int num_rows,int num_cols, double bank[][num_cols]);

//1. gets bank account id 
//2. prints the New balance of the account After the deposit
//3. this action is only available if the bank account status is OPEN
int new_Deposit(int account_id , double deposit ,int num_rows,int num_cols, double bank[][num_cols]);

//1. gets bank account id 
//2. prints the New balance of the account After the withdraw
//3. this action is only available if the bank account status is 
int new_Withdraw(int account_id , double withdraw ,int num_rows,int num_cols, double bank[][num_cols]);

//1. closes the bank id 
//2. this action is only available if the bank account status is 
void close_Account(int account_id ,int num_rows,int num_cols, int bank[][num_cols]);

//1. this action is only available if the bank account status is 
void add_interest(double interest_precent ,int num_rows,int num_cols, double bank[][num_cols]);

//1. prints all the opened accounts and their current balance
void print_accounts(int num_rows,int num_cols, double bank[][num_cols]);

//1. closes all the bank accounts and shuts down the program
void close_bank(int num_rows,int num_cols, double bank[][num_cols]);
#endif