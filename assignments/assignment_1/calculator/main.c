#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n Results:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0)
    {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
