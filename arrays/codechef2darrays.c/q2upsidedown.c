#include <stdio.h>

int main() {
    int N, M;

    // Take N and M as input
    printf("Enter number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    // Declare a 2D array of size N x M
    int array[N][M];

    // Take N x M inputs and store them in the 2D array
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Output the matrix upside down
    printf("Upside down matrix is:\n");
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < M; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
