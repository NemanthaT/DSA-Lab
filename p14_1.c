#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the binary search tree
struct Node {
    int age;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int age) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->age = age;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node
struct Node* insertNode(struct Node* root, int age) {
    if (root == NULL) {
        return createNode(age);
    }

    if (age < root->age) {
        root->left = insertNode(root->left, age);
    } else if (age > root->age) {
        root->right = insertNode(root->right, age);
    }

    return root;
}

// Function to perform in-order traversal
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->age);
        inOrderTraversal(root->right);
    }
}

// Function to delete a node
struct Node* deleteNode(struct Node* root, int age) {
    if (root == NULL) {
        return root;
    }

    if (age < root->age) {
        root->left = deleteNode(root->left, age);
    } else if (age > root->age) {
        root->right = deleteNode(root->right, age);
    } else {

        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* minValueNode = root->right;
        while (minValueNode->left != NULL) {
            minValueNode = minValueNode->left;
        }

        root->age = minValueNode->age;
        root->right = deleteNode(root->right, minValueNode->age);
    }

    return root;
}

int main() {
    struct Node* root = NULL;

    // Creating binary search tree
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 60);
    root = insertNode(root, 25);
    root = insertNode(root, 35);
    root = insertNode(root, 55);
    root = insertNode(root, 40);
    root = insertNode(root, 45);

    printf("Original Tree (In-order Traversal): ");
    inOrderTraversal(root);
    printf("\n");

    // Deleting age 40
    root = deleteNode(root, 40);
    printf("Tree after deleting age 40 (In-order Traversal): ");
    inOrderTraversal(root);
    printf("\n");

    // Deleting age 55
    root = deleteNode(root, 55);
    printf("Tree after deleting age 55 (In-order Traversal): ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}