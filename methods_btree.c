#include <stdio.h>
#include <stdlib.h>
#include "header.h"

struct node* createNode(int data){
	struct node* nn;
	nn=malloc(sizeof(struct node));
	nn->data=data;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
};

struct node* insertNode(struct node* root, int data){
	if(root==NULL){
		return createNode(data);
	}
	if(data < root->data){
		root->left=insertNode(root->left, data);
	}
	else if(data > root->data){
		root->right=insertNode(root->right, data);
	}
}
void inorderTraversal(struct node* root){
	if(root!=NULL){
		inorderTraversal(root->left);
		printf("%d ", root->data);
		inorderTraversal(root->right);
	}
}
void preorderTraversal(struct node* root){
	if(root!=NULL){
		printf("%d ", root->data);	
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}
void postorderTraversal(struct node* root){
	if(root!=NULL){	
		preorderTraversal(root->left);
		preorderTraversal(root->right);
		printf("%d ", root->data);
	}
}
