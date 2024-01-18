#include <stdio.h>

int main()
{
    // Use a for loop to iterate from 1 to 5
    for (int i = 1; i <= 5; ++i)
    {
        // Declare a variable inside the loop and assign it the loop counter's value
        int loopVar = i;
        // Print the value of the variable
        printf("The value of loopVar is: %d\n", loopVar);
    }
    return 0;
}