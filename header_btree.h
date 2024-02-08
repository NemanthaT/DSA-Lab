#ifndef bt_h
#define bt_h

struct node{
	int data;
	struct node* left;
	struct node* right;
}st;

struct node* insertNode(struct node* root, int );
struct node* createNode(int );
void inorderTraversal(struct node* root);
void preorderTraversal(struct node* root);
void postorderTraversal(struct node* root);
 
#endif
