#ifndef header_bt_h
#define header_bt_h

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;

struct Node *createNode(int value);
void displayData(Node *parent);
void inorder(struct Node *root);
void preorder(struct Node *root);
void postorder(struct Node *root);
struct Node *insert(struct Node *node, int key);

#endif