
#include <stdio.h>
//finding factorial of number 
int factorial(int n);

int main()
{
    int number = 5;
    printf("factorial of %d: %d\n", number, factorial(number));
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

