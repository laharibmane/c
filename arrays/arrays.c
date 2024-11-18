#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];  // Declare the matrix

    printf("Enter the matrix elements:\n");
    // Reading the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Zig-Zag Traversal:\n");
    // Performing zig-zag traversal
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // Traverse from left to right
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
        } else {
            // Traverse from right to left
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");  // Newline after each row
    }

   
    // Printing the entire matrix (for verification, optional)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);  // Added a space between numbers
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
