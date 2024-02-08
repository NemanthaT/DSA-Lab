#include <stdio.h>
#include <stdlib.h>
#include "header_btree.h"

int main(){
	int i=50;
	int j;
	int arr[6]={30,20,40,70,60,80};
	struct node* Root=NULL;
	struct node* temp=NULL;
	Root=createNode(i);
	temp=Root;
	
	for (j=0;j<6;j++){
		insertNode(temp, arr[j]);
	}
	temp=Root;
	printf("inorderTraversal: ");
	inorderTraversal(temp);
	printf("\n");
	temp=Root;
	printf("preorderTraversal: ");
	preorderTraversal(temp);
	printf("\n");
	temp=Root;
	printf("postorderTraversal: ");
	postorderTraversal(temp);
	printf("\n");
}
