#include <stdio.h>

// Function prototype for isSymmetric
int isSymmetric(int matrix[][3], int rows, int cols);

int main()
{
    // Define a 3x4 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 8}};
    int rows = 3;
    int cols = 3;

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, rows, cols))
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

// Function definition for isSymmetric
int isSymmetric(int matrix[][3], int rows, int cols)
{
    // Check if the matrix is square
    if (rows != cols)
    {
        return 0; // Rectangular matrices are not symmetric
    }

    // Check for symmetry
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0; // If any element is not symmetric
            }
        }
    }
    return 1; // Matrix is symmetric
}
