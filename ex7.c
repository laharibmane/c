#include <stdio.h>

// Function prototype
int power(int base, int exponent);

int main()
{
    int base = 1000, exponent = 3;
    printf("%d to the power of %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}

// Function definition
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1; // Any number raised to power 0 is 1
    }
    else
    {
        return base * power(base, exponent - 1); // Recursively compute power
    }
}