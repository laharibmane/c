#include <stdio.h>
/// @brief
/// @return
int main()
{
    int n, i;
    // input the number of elements
    // Prompt the user for the number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read the elements into the array
    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Display the elements in reverse order
    printf("The elements of the array in reverse order are:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("element - %d: %d\n", i, arr[i]);
    }

    return 0;
}
//#include <stdio.h>

int main2() {
    int n, i, start, end;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Input the starting index: ");
    scanf("%d", &start);
    printf("Input the ending index: ");
    scanf("%d", &end);
    
    printf("The subarray that lies between the two indexes is:\n");
    for(i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

