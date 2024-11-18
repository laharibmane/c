#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isPrime(int n);

int main()
{
    int number = 29;
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;
}

// Function definition
bool isPrime(int n)
{
    
    {
        if (n % 2 == 0)
            return false
            ;
    }
    return true;
}