#include <stdio.h>
#include <stdlib.h>
#include "header_bt.h"

int main(){
    int value;
    Node *root = NULL;
    int Q;

    printf("First type query no and press enter\n");
    printf("Type \"Insert Value\" to insert a node\n");
    printf("Type \"Delete Value\" to insert a node\n");
    printf("Type \"Balance\" to Balance\n");
    printf("Type \"Height\" to get height\n");
    printf("Type \"Trav\" to traversal\n");
    printf("Enter Commands: ");
    printf("\n");

    scanf("%d", &Q);
    while (Q--) {
        char query[10];
        int data;
        scanf("%s", query);
        if (strcmp(query,"Insert") == 0) {
            scanf("%d", &data);
            root = insert(root, data);
        } else if (strcmp(query,"Delete") == 0) {
            scanf("%d", &data);
            root = deleteNode(root, data);
        } else if (strcmp(query,"Balance") == 0) {
            root = balanceBST(root);
        } else if (strcmp(query,"Height") == 0) {
            printf("height of the tree: ");
            printf("%d\n", height(root));
        } else if (strcmp(query,"Trav") == 0) {
            printf("In-order traversal  : ");
            inorder(root);
            printf("\n");
        }
        else{
            printf("Operation not complete");
        }
    }

    return 0;

}