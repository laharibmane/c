#include <stdio.h>

int Even(int number);

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (Even(number))
    {
        printf("%d is even\n", number);
    }
    else
    {
        printf("%d is odd\n", number);
    }
    return 0;
}

int Even(int number)
{
    return number % 2 == 0;
}
