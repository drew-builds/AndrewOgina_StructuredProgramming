#include <stdio.h>
#include <string.h>

char realPassword[] = "password";

int is_password(char inputPassword[99])
{
    int result = strcmp(realPassword, inputPassword);
    if (result == 0)
    {
        return 1;
    }
    return 0;
}

int login(char inputPassword[99])
{
    return is_password(inputPassword);
}