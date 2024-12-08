#include <stdio.h>
#include <stdlib.h>
#include "header_bt.h"

int main(){
    int n,value;
    int i=0;
    struct Node *root = NULL;
    struct Node *tmp = NULL;
    struct Node *lnxt = NULL;
    struct Node *rnxt = NULL;

    printf("Enter how many nodes: ");
    scanf("%d", &n);
    printf("Enter the date for root node %d: ", i);
    scanf("%d", &value);
    root = createNode(value);
    tmp = root;
    printf("Root node data: %d\n", root->data);

    for(i=1; i<n; i++){
        printf("Enter the date for node %d: ", i);
        scanf("%d", &value);
        tmp = insert(tmp, value);
        printf("tmp: %d\n", tmp);
    }
    printf("Pre-order traversal : ");
    preorder(root);
    printf("\n");

    printf("In-order traversal  : ");
    inorder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postorder(root);
    printf("\n");

    return 0;

}