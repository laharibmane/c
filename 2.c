#include <stdio.h>
// write a program in c to read n values in an array

int main()
{
    int arr[10]; // Array to hold 10 elements
    int i;

    // Input 10 elements in the array
    printf("Input 10 elements in the array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("element - %d\n : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("Elements in array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}