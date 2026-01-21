#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct ATM
{
    int balance;
    char password[99];
    int isLoggedIn;
} ATM;

// Returns a new atm instance
ATM newATM(int balance, char password[99]);

// Returns 1 if logged in and 0 if wrong password
int login(ATM *acc, char inputPassword[99]);

// Returns the current balance
void getBalance(ATM *acc);

// Deposits money in to the account and returns the new balance
void deposit(ATM *acc, int money);

// Withdraws valid amount from account returns -1 incase of error
void withdraw(ATM *acc, int amount);

#endif
