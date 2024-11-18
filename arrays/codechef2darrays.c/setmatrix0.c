#include <stdio.h>

#define MAX 100  // Define the maximum size of the matrix

int main() {
    int N, M;
    int matrix[MAX][MAX];
    int rows[MAX] = {0};   // To keep track of rows to be set to 0
    int cols[MAX] = {0};   // To keep track of columns to be set to 0

    // Take N and M as input
    printf("Enter number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    // Take N x M inputs and store them in the 2D array
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Identify which rows and columns need to be set to 0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = 1;  // Mark this row for zeroing
                cols[j] = 1;  // Mark this column for zeroing
            }
        }
    }

    // Set the marked rows to 0
    for (int i = 0; i < N; i++) {
        if (rows[i]) {
            for (int j = 0; j < M; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the marked columns to 0
    for (int j = 0; j < M; j++) {
        if (cols[j]) {
            for (int i = 0; i < N; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Output the modified matrix
    printf("Matrix after setting zeroes:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
