#include <stdio.h>

// Function prototype to check if a number is even
int Even(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even and print the result
    if (Even(number))
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}

// Function to check if a number is even
int Even(int number)
{
    return number % 2 == 0;
}