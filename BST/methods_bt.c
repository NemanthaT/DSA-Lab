#include <stdio.h>
#include <stdlib.h>
#include "header_bt.h"

struct Node *createNode(int value){
    struct Node *nn;
    nn=malloc(sizeof(struct Node));
    nn->data=value;
    nn->left=NULL;
    nn->right=NULL;

    return nn;
}

struct Node *insert(struct Node *node, int value) {
    if (node == NULL){
        return createNode(value);
    }

    if (node->data == value){
        return node;
    }
    
    if (node->data < value){
        node->right = insert(node->right, value);
    }

    else{
        node->left = insert(node->left, value);
    }

    return node;
}

void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        inorder(root->right);
        printf("%d ", root->data);
    }
}