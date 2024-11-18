#include <stdio.h>

#define MAX 100

int main() {
    int N, M;
    int matrix[MAX][MAX];

    // Take N and M as input
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    // Take N x M inputs and store them in the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the number of equal row-column pairs
    int count = 0;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            int isEqual = 1;  // Assume the row and column are equal
            for (int i = 0; i < N && i < M; i++) {  // Iterate through both row and column elements
                if (matrix[row][i] != matrix[i][col]) {
                    isEqual = 0;  // Mark as not equal if any element doesn't match
                    break;
                }
            }
            if (isEqual) {
                count++;  // Increment count if row and column are equal
            }
        }
    }

    // Output the result
    printf("Number of equal row-column pairs: %d\n", count);

    return 0;
}

