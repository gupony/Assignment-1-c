#include <stdio.h>

int main()
{
    int dayNumber;

    // Ask the user for a number representing the day of the week
    printf("Enter a number between 1 and 3 which represents a day of the week: ");
    scanf("%d", &dayNumber);

    // Use a switch statement to determine the day based on the number
    switch (dayNumber)
    {
    case 1:
        printf("1 represents Monday.\n");
        break;
    case 2:
        printf("2 represents Tuesday.\n");
        break;
    case 3:
        printf("3 represents Wednesday.\n");
        break;
    default:
        printf("That's not right! Please enter a number between 1 and 3.\n");
        break;
    }

    return 0;
}