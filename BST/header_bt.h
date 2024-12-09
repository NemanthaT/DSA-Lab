#ifndef header_bt_h
#define header_bt_h

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node *createNode(int value);
void inorder(Node *root);
Node *insert(Node *node, int key);
Node *deleteNode(Node *root, int data);
int height(Node *root);
Node *bstToVine(Node *root);
void compress(Node *grand, int m);
Node *balanceBST(Node *root);

#endif