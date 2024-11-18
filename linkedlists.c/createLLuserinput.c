#include <stdio.h>
#include <stdlib.h>

// Define a structure for the Node of a linked list
struct Node {
    int data;              // To store the data value
    struct Node *next;     // To store the pointer to the next Node
} *first = NULL;           // Initialize the head (first) of the list as NULL

// Function to create a linked list from user input
void create(int n) {
    int i, value;           // Loop variable 'i' and 'value' for user input
    struct Node *t, *last;  // Temporary Node pointer 't' and pointer to the last Node 'last'

    // Input the first element
    printf("Enter element 1: ");
    scanf("%d", &value);    // Read the first element value from the user
    
    // Create the first node
    first = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for the first node
    first->data = value;    // Set the data of the first node
    first->next = NULL;     // First node points to NULL (end of list for now)
    last = first;           // 'last' points to the first node (initially)

    // Loop through to input and create the remaining nodes
    for (i = 1; i < n; i++) {
        printf("Enter element %d: ", i+1);   // Prompt for each subsequent element
        scanf("%d", &value);                 // Read the next element value
        
        t = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for a new node
        t->data = value;     // Set the data of the new node
        t->next = NULL;      // The new node's next pointer is set to NULL (end of the list)
        last->next = t;      // Link the previous node (last) to the new node
        last = t;            // Update 'last' to point to the new node
    }
}

// Function to display the linked list elements in order
void Display(struct Node *p) {
    while (p != NULL) {      // Loop until we reach the end of the list (p is NULL)
        printf("%d ", p->data);  // Print the data of the current node
        p = p->next;         // Move to the next node
    }
    printf("\n");            // Print a newline after displaying all elements
}

// Function to display the linked list elements in reverse order using recursion
void RDisplay(struct Node *p) {
    if (p != NULL) {         // Base condition: If p is NULL, we stop the recursion
        RDisplay(p->next);   // Recursive call with the next node
        printf("%d ", p->data);  // Print the data after the recursive call, which reverses the order
    }
}

int main() {
    int n;                   // Number of elements in the linked list

    // Get the number of elements from the user
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);         // Read the number of elements
    
    create(n);               // Create a linked list from user input with 'n' elements
    
    printf("Linked List: ");
    Display(first);          // Display the linked list elements in normal order
    
    printf("Reverse Display: ");
    RDisplay(first);         // Display the linked list elements in reverse order using recursion
    printf("\n");            // Print a newline after reverse display
    
    return 0;                // Return 0 to indicate successful execution
}




#include<stdio.h>
#include<std.lbh>

struct node{
    int data;
    struct node* next;

}*first  = Null;

void create (int n){
    int value, int i;
    struct node *t,*last;
    printf(" enter the value of element 1");
    scanf("%d",&value);

    first = (struct node*)malloc(size of(struct node));
    first -> data=value
    first ->next=null;
    last=first;



    for(int i=1;i<n;i++){
        printf("enter the elemnt %d:",i+1);
        scanf("%d",&value);
        t->data=value;
        t->next=null;
        
    }

}





