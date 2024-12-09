#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header_bt.h"

Node *createNode(int value){
    Node *nn;
    nn=malloc(sizeof(struct Node));
    nn->data=value;
    nn->left=NULL;
    nn->right=NULL;

    return nn;
}

Node *insert(Node *node, int value) {
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

Node *deleteNode(Node *root, int data) {
    if (root == NULL) return root;
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = root->right;
        while (temp && temp->left != NULL) {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int height(Node *root) {
    if (root == NULL){
        return 0;
    }

    else{
        int lheight = height(root->left);
        int rheight = height(root->right);

        if (lheight > rheight){
            return lheight + 1;
        }

        else{
            return rheight + 1;
        }
    }
}

int bstToVine(Node *grand)
{
    int count = 0;
    Node *tmp = grand->right;
 
    while (tmp) {
         
        if (tmp->left) {
            Node* oldTmp = tmp;
            tmp = tmp->left;
            oldTmp->left = tmp->right;
            tmp->right = oldTmp;
            grand->right = tmp;
        }
 
        else {
            count++;
            grand = tmp;
            tmp = tmp->right;
        }
    }
 
    return count;
}
 
void compress(Node *grand, int m)
{

    Node *tmp = grand->right;
 
    for (int i = 0; i < m; i++) {
        Node *oldTmp = tmp;
        tmp = tmp->right;
        grand->right = tmp;
        oldTmp->right = tmp->left;
        tmp->left = oldTmp;
        grand = tmp;
        tmp = tmp->right;
    }
}
 
Node *balanceBST(Node *root)
{
    Node *grand = createNode(0);
 
    grand->right = root;
 
    int count = bstToVine(grand);
 
    int h = log2(count + 1);
 
    int m = pow(2, h) - 1;
 
    compress(grand, count - m);
 
    for (m = m / 2; m > 0; m /= 2) {
        compress(grand, m);
    }

    return grand->right;
}