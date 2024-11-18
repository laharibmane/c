#include <stdio.h>
#include <string.h>

int main() {
    char str[100];       // To store the input string (assuming a max length of 100 for simplicity)
    char ch;             // To store the character to search for
    
    // Input the string
    scanf("%s", str);
    
    // Input the character to be searched
    scanf(" %c", &ch);  // Notice the space before %c to handle newline after the previous input

    int found = -1;      // To store the index of the found character, initialized to -1 (not found)

    // Linear search for the character in the string
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            found = i;
            break;
        }
    }

    // Print the result
    printf("%d\n", found);

    return 0;
}
