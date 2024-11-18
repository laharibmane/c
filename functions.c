
#include <stdio.h>
// function declration
int add(int a, int b, int c);
// calling a function
int main()
{
    int x = 3;
    int y = 4;
    int z = 7;
    int result = add(x, y, z);
    printf("The sum of %d ,%d and %d is %d\n", x, y, z, result);
    return 0;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
