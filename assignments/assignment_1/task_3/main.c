#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%999s", str);

    // Find and print the length of the string
    printf("Length of the string: %lu\n", strlen(str));

    return 0;
}
