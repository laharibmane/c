#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Global pointer to represent the head of the linked list
struct Node* first = NULL;

// Function to insert a new element at the front of the linked list
void insertAtFront(int value) {
    // Step 1: Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Step 2: Initialize the new node with the given value and make its next pointer point to the current first node
    newNode->data = value;
    newNode->next = first;
    
    // Step 3: Make the new node the first node of the list
    first = newNode;
    
    // Step 4: Print the value at the head of the list after insertion
    printf("Head after insertion: %d\n", first->data);
}

// Function to display the entire linked list
void displayList() {
    struct Node* temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n, value;
    
    // Input the number of elements to insert
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);
    
    // Insert elements at the front of the list
    for (int i = 0; i < n; i++) {
        printf("Enter value to insert: ");
        scanf("%d", &value);
        insertAtFront(value);
    }
    
    // Display the entire list after all insertions
    printf("Final Linked List: ");
    displayList();
    
    return 0;
}
