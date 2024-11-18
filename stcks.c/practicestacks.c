#include <stdio.h>

struct Stack {
    int S[100];   // Array to hold stack elements
    int top;      // Index of the top element
};

// Function to pop an element from the stack
void pop(struct Stack *st, int *x) {
    if (st->top == -1) {
        printf("Stack Underflow\n");
        *x = -1; // Indicate an error
    } else {
        = st->S[st->top]; // Access the top element
        st->top--;                     // Decrement the top
    }
}

int main() {
    struct Stack st;
    st.top = -1; // Initialize the stack to be empty

    // Push some values onto the stack
    st.S[++st.top] = 10;
    st.S[++st.top] = 20;
    st.S[++st.top] = 30;

    int value;

    // Pop values from the stack
    pop(&st, &value);
    printf("Popped value: %d\n", value); // Should print 30

    pop(&st, &value);
    printf("Popped value: %d\n", value); // Should print 20

    pop(&st, &value);
    printf("Popped value: %d\n", value); // Should print 10

    pop(&st, &value); // Stack is empty now
    printf("Popped value: %d\n", value); // Should print -1 (error)

    return 0;
}
