#include <stdio.h>

int main()
{
    int num1, num2;

    // Ask the user for the first number
    printf("Please enter a number: ");
    scanf("%d", &num1);

    // Ask the user for the second number
    printf("Now enter a second number: ");
    scanf("%d", &num2);

    // Compare the two numbers using if statements and print the result
    if (num1 > num2)
    {
        printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("The first number (%d) is less than the second number (%d).\n", num1, num2);
    }
    else
    {
        printf("The first number (%d) is equal to the second number (%d).\n", num1, num2);
    }

    return 0;
}