#include <stdio.h>   // Standard input-output library for functions like printf
#include <stdlib.h>  // Standard library for memory allocation functions like malloc

// Define a structure for the Node of a linked list
struct Node {
    int data;            // Holds the data (integer) for each node
    struct Node *next;   // Pointer to the next node in the linked list
} *first = NULL;         // Declare a global pointer to the first node of the linked list, initially NULL

// Function to create a linked list from an array of integers
void create(int A[], int n) {
    int i;  // Loop counter
    struct Node *t, *last;  // Temporary pointer 't' and 'last' to keep track of the last node
    first = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory for the first node
    first->data = A[0];  // Set the data of the first node to the first element in the array
    first->next = NULL;  // Set the next pointer of the first node to NULL (it has no next node yet)
    last = first;  // 'last' will initially point to the first node (used to build the rest of the list)
    
    // Loop through the array starting from the second element (i=1) to the end (i<n)
    for(i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory for a new node
        t->data = A[i];  // Set the data of the new node to the current element of the array
        t->next = NULL;  // The new node's next pointer is set to NULL (it's currently the last node)
        last->next = t;  // Link the new node to the previous node (last)
        last = t;  // Move the 'last' pointer to the new node (now the last node)
    }
}

// Function to count the number of nodes in the linked list (iteratively)
int count(struct Node *p) {
    int l = 0;  // Initialize the counter variable 'l' to 0
    while(p) {  // Loop through the linked list until 'p' becomes NULL (end of list)
        l++;  // Increment the counter for each node encountered
        p = p->next;  // Move to the next node
    }
    return l;  // Return the total number of nodes
}

// Function to count the number of nodes recursively
int Rcount(struct Node *p) {
    if(p != NULL)  // Base condition: if the current node is not NULL
        return Rcount(p->next) + 1;  // Recursively count the next nodes and assdd 1 for the current node
    else
        return 0;  // If the node is NULL (end of list), return 0
}

// Function to calculate the sum of all node data (iteratively)
int sum(struct Node *p) {
    int s = 0;  // Initialize sum variable 's' to 0
    
    while(p != NULL) {  // Loop through the linked list until 'p' becomes NULL
        s += p->data;  // Add the data of the current node to 's'
        p = p->next;  // Move to the next node
    }
    return s;  // Return the total sum of all node data
}

// Function to calculate the sum of all node data recursively
int Rsum(struct Node *p) {
    if(p == NULL)  // Base condition: if the node is NULL (end of list)
        return 0;  // Return 0 (no more data to add)
    else
        return Rsum(p->next) + p->data;  // Add the data of the current node to the sum of the rest
}

// Main function where execution starts
int main() {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};  // Initialize an array of integers
    create(A, 8);  // Call the create function to build a linked list from the array
    
    printf("Count: %d\n", count(first));  // Call count function and print the number of nodes
    printf("Sum: %d\n", sum(first));      // Call sum function and print the sum of all node data
    
    return 0;  // Return 0 to indicate successful execution
}
