
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *top = NULL;

// Push an element onto the stack
void push(int x) {
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL) {
        printf("Stack is full (Memory allocation failed)\n");
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

// Pop an element from the stack
int pop() {
    struct Node *t;
    int x = -1;

    if (top == NULL) {
        printf("Stack is Empty\n");
    } else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

// Display the stack elements
void Display() {
    struct Node *p = top;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// Check if the stack is empty
int isEmpty() {
    return top == NULL;
}

// Check if the stack is full (memory allocation check)
int isFull() {
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL) {
        return 1; // Memory allocation failed
    }
    free(t);
    return 0;
}

// Return the top element of the stack
int stackTop() {
    if (!isEmpty()) {
        return top->data;
    }
    return -1; // Indicates that the stack is empty
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Stack elements: ");
    Display();

    printf("Top element: %d\n", stackTop());

    if (isFull()) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }

    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    printf("Popped value: %d\n", pop());

    printf("Stack elements after pop: ");
    Display();

    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}


