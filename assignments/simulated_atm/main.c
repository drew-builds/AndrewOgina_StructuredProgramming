#include <stdio.h>
#include <string.h>
#include "./account/account.h"

int main()
{
    ATM myATM = newATM(1000, "1234");
    int attemptsAllowed = 3;
    int loggedIn = 0;
    int choice;
    char pw[99];
    int amount;

    for (int i = 0; i < attemptsAllowed; i++)
    {
        printf("Enter password: ");
        scanf("%s", pw);

        if (login(&myATM, pw) != 0)
        {
            break;
        }

        int remaining = attemptsAllowed - (i + 1);
        printf("Attempts remaining: %d\n", remaining);

        if (remaining == 0)
        {
            printf("Failed to login, exiting program\n");
            return 0;
        }
    }
    while (1)
    {
        printf("\n===== ATM Menu =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getBalance(&myATM);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            deposit(&myATM, amount);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            withdraw(&myATM, amount);
            break;

        case 4:
            printf("Goodbye!\n");
            return 0;
            
        default:
            printf("Invalid option. Try again.\n");
            break;
        }
    }

    return 0;
}
