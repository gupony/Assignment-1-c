#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int integerVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';

    // Print the values of the variables
    printf("Value of integerVar: %d\n", integerVar);
    printf("Value of floatVar: %f\n", floatVar);
    printf("Value of charVar: %c\n", charVar);

    // Print the memory addresses of the variables using the address-of operator (&)
    printf("Address of integerVar: %p\n", (void *)&integerVar);
    printf("Address of floatVar: %p\n", (void *)&floatVar);
    printf("Address of charVar: %p\n", (void *)&charVar);

    return 0;
}