#include <stdio.h>
#include "account.h"
#include "string.h"

char errMsg[] = "Unauthorized! Please login to perform action!";

ATM newATM(int balance, char password[99])
{
    ATM atm;
    atm.balance = balance;
    strcpy(atm.password, password);
    atm.isLoggedIn = 0;
    return atm;
}

int login(ATM *acc, char inputPassword[99])
{
    int result = strcmp(acc->password, inputPassword);
    if (result == 0)
    {
        acc->isLoggedIn = 1;
        printf("user logged in successfully!\n");
        return 1;
    }
    else
    {
        printf("failed to log in. Incorrect password\n");
        return 0;
    }
}

void getBalance(ATM *acc)
{
    if (acc->isLoggedIn)
    {
        printf("Account balance: %i\n", acc->balance);
        return;
    }
    else
    {
        printf("%s\n", errMsg);
        return;
    }
}

void deposit(ATM *acc, int money)
{
    if (acc->isLoggedIn)
    {
        acc->balance = acc->balance + money;
        printf("KES %i deposited successfully. New account balance is: %i\n", money, acc->balance);
        return;
    }
    else
    {
        printf("%s\n", errMsg);
        return;
    }
}

void withdraw(ATM *acc, int amount)
{
    if (acc->isLoggedIn)
    {
        if (acc->balance >= amount)
        {
            acc->balance = acc->balance - amount;
            printf("KES %i Withdrawn from account. New balance is: %i\n", amount, acc->balance);
        }
        else
        {
            printf("failed to withdraw amount due to low account balance. Account balance is: %i\n", acc->balance);
            return;
        }
    }
    else
    {
        printf("%s\n", errMsg);
        return;
    }
}
