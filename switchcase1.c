#include <stdio.h>
int main()
{
    int x = 2;
    switch (x)
    {
    case 1:
        printf("x is 1");
        break;
    case 2:
        printf("x is 2"); // here no break is put //
    case 3:
        printf("x is 3");
        break;
    default:
        printf("x is a number either than 1 and 2 ");
        break;
    }
    return 0;
}
