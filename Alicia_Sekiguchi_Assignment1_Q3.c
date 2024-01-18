#include <stdio.h>

int main()
{
    // Declare and initialize an integer array with values
    int numbers[] = {1, 2, 3, 4, 5};
    // Calculate the size of the array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Use a for loop to go through the array elements
    for (int i = 0; i < arraySize; ++i)
    {
        if (numbers[i] % 2 == 0)
        {
            // If the element is even
            printf("Element %d is even.\n", numbers[i]);
        }
        else
        {
            // If the element is odd
            printf("Element %d is odd.\n", numbers[i]);
        }
    }
    return 0;
}