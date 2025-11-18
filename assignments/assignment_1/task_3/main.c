#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%999s", str);

    printf("Length of the string: %lu\n", strlen(str));

    return 0;
}
