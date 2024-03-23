#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to push a new element onto the stack
void push(struct Node** top, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow\n");
        exit(1);
    }
    int data = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

// Function to peek at the top element of the stack
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return top->data;
}

// Function to display the stack elements
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function for testing
int main() {
    struct Node* top = NULL;

    // Push some elements onto the stack
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);

    // Display stack elements
    printf("Stack elements: ");
    display(top);

    // Peek at the top element
    printf("Top of the stack: %d\n", peek(top));

    // Pop an element
    printf("Popped element: %d\n", pop(&top));

    // Display stack elements after popping
    printf("Stack elements after popping: ");
    display(top);

    return 0;
}