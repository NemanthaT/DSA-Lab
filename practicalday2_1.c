#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *node1=NULL;
    struct node *node2=NULL;
    struct node *node3=NULL;
    struct node *b=NULL;
    struct node *l=NULL;
    struct node *ptr=NULL;
    int nodes=0;

    node1=malloc(sizeof(struct node));
    node1->data=5;
    node1->link=NULL;

    node2=malloc(sizeof(struct node));
    node2->data=6;
    node2->link=NULL;
    node1->link=node2;

    node3=malloc(sizeof(struct node));
    node3->data=7;
    node3->link=NULL;
    node2->link=node3;

    ptr=node1;
    while(ptr!=NULL){
        printf("Data: %d\n", ptr->data);
        ptr=ptr->link;
    }
    printf("\n");

    b=malloc(sizeof(struct node));
    printf("Input data to insert at the beginning: ");
    scanf("%d", &b->data);
    b->link=node1;

    printf("After new data:\n");
    ptr=b;
    while(ptr!=NULL){
        printf("Data: %d\n", ptr->data);
        ptr=ptr->link;
    }
    printf("\n");

    l=malloc(sizeof(struct node));
    node3->link=l;
    printf("Input data to insert at the end: ");
    scanf("%d", &l->data);
    l->link=NULL;

    printf("After new data:\n");
    ptr=b;
    while(ptr!=NULL){
        printf("Data: %d\n", ptr->data);
        ptr=ptr->link;
    }  
    printf("\n");  

    ptr=b;
    while(ptr!=NULL){
        nodes++;
        ptr=ptr->link;
    } 
    printf("No of nodes: %d\n", nodes);

    return 0;   

}