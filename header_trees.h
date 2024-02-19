#ifndef tree_h
#define tree_h

typedef struct node{
    int data;
    struct node *right;
    struct node *left;
}Tree;

Tree* root;

struct node *createnode(int n);

#endif