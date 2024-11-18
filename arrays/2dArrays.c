#include <stdio.h>

int main() {
    int m, n;

    // Input for dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    // Declare a 2D array
    int arr[n][m];

    // Input for array elements
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Traversing the 2D array and printing each element
    printf("Traversing the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element at arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}



