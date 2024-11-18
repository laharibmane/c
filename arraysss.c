#include <stdio.h>

// Function to print a 2D array
void print2DArray(int (*arr)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Accessing the element using pointer arithmetic
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main() {
    // Initialize a 2D array
    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // Function calling and passing the arguments
    print2DArray(array, 2, 3);

    return 0;
}
