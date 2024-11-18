#include <stdio.h>

int main()
{
    int sum = 0, i = 3;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);
    printf("Sum of numbers from 3 to 100 is: %d\n", sum);
    return 0;
}