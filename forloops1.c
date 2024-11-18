#include <stdio.h>
int main()// print the sum of numbers from 1 to 100
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    {
        printf("the sum of number from 1 to 100is %d\n", sum);
    }
    // here the printf statement is outside the loop and provides & prints the final sum only once , after the loop has completed.
}
