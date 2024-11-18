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

    // Find the row with the maximum number of 1s
    int maxRowIndex = 0;
    int maxCount = 0;

    // Iterate through each row
    for (int i = 0; i < N; i++) {
        // Count the number of 1s in the current row
        int count = 0;
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }

        // Update maxRowIndex if the current row has more 1s
        if (count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }

    // Output the row index with the maximum number of 1s
    printf("Row with maximum number of 1s: %d\n", maxRowIndex);

    return 0;
}