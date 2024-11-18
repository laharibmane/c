#include <stdio.h>



int main() {
    int M,N;
   

    // Take N as input
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &N);
int matrix[M][N];
    // Take N x N inputs and store them in the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the number of equal row-column pairs
    int count = 0;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            int isEqual = 1;  // Assume the row and column are equal
            for (int k = 0; k < N; k++) {
                if (matrix[row][k] != matrix[k][col]) {
                    isEqual = 0;
                    break;
                }
            }
            if (isEqual) {
                count++;
            }
        }
    }

    // Output the result
    printf("Number of equal row-column pairs: %d\n", count);

    return 0;
}
