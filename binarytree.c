#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left,*right;
};

struct node *createNode(int data){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void main(){
    int no,j,data;
    int ary[no];
    struct node *root;

    printf("Enter number of elements: ");
    scanf("%d", &no);
    printf("Enter the elements like 1 2 3 4 5:");
    for(j=0;j<no;j++){
        scanf("%d", &ary[j]);
    }
    for(j=0;j<no;j++){
        printf("elements are: %d\n", ary[j]);
    }
    
}