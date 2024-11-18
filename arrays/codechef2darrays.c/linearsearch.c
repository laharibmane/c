#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, k;

    // Read the length of the array (n) and the element to search for (k)
    scanf("%d %d", &n, &k);

    int array[n];  // Declare an array with size n

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    bool found = false;

    // Check if k is present in the array
    for (int i = 0; i < n; ++i) {
        if (array[i] == k) {
            found = true;
            break;
        }
    }

    // Print the result
    if (found) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
