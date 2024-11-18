#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of pairs

    int x, y;
    int a, b;

    // Read the pairs and check if any pair contains both a and b
    int found = 0; // Boolean flag (0 = not found, 1 = found)
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y); // Read the pair of integers

        // Check if the pair contains both a and b in any order
        if ((x == a && y == b) || (x == b && y == a)) {
            found = 1;
            break;
        }
    }

    // Input the two integers a and b to be searched
    scanf("%d %d", &a, &b);

    // Print the result based on whether the pair was found
    if (found) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
