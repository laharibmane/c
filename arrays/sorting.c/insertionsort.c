#include <stdio.h>

void Insertion(int A[], int n) {
    int i, j, x;
    for (i = 1; i < n; i++) {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int A[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Call the Insertion Sort function
    Insertion(A, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

