#include <stdio.h>
int swap(int *a, int *b);

int main()
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

// Function definition
int swap(int *a, int *b)
{
    int temp = *a;
    return *a = *b;
    return *b = temp;
}
